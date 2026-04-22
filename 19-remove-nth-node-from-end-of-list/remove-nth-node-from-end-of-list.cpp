class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            length++;
            temp = temp->next;
        }
        int pos = length - n;
        if(pos == 0) {
            return head->next;
        }
        int count = 0;
        ListNode* prev = head;
        temp = head->next;
        while(temp != nullptr) {
            count++;
            if(count == pos) {  
                prev->next = temp->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};