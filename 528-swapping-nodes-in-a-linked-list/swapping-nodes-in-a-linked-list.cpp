class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int totalLength = 0;
        ListNode* temp = head;
        ListNode* swap1 = nullptr;
        ListNode* swap2 = nullptr;

        // Count length
        while (temp) {
            totalLength++;
            temp = temp->next;
        }

        int krevers = totalLength - k + 1;

        // Traverse again
        ListNode* temp2 = head;
        int c = 1;

        while (temp2) {
            if (c == k) {
                swap1 = temp2;
            }
            if (c == krevers) {
                swap2 = temp2;
            }
            temp2 = temp2->next;
            c++;
        }
        int val1 = swap1->val;
        swap1->val = swap2->val;
        swap2->val = val1;

        return head;
    }
};