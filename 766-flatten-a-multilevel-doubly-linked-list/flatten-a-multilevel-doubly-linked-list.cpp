class Solution {
public:
    
    Node* solve(Node* head) {
        Node* temp = head;
        Node* last = nullptr;

        while (temp) {
            Node* nextNode = temp->next;

            // If child exists
            if (temp->child) {
                Node* childHead = temp->child;
                
                // Flatten child
                Node* childTail = solve(childHead);

                // Connect temp with child
                temp->next = childHead;
                childHead->prev = temp;
                temp->child = nullptr;

                // Connect child tail with nextNode
                if (nextNode) {
                    childTail->next = nextNode;
                    nextNode->prev = childTail;
                }

                last = childTail;
                temp = childTail;
            } 
            else {
                last = temp;
            }

            temp = temp->next;
        }

        return last;
    }

    Node* flatten(Node* head) {
        if (!head) return head;
        solve(head);
        return head;
    }
};