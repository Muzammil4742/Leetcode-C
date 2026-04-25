class MyLinkedList {
public:
    struct ListNode {
        int val;
        ListNode* prev;
        ListNode* next;
        ListNode(int x) : val(x), prev(nullptr), next(nullptr) {}
    };

    ListNode* head = nullptr;

    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        if(index < 0) {
            return -1;
        }
        int i = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            if(i == index) {
                return temp->val;
            }
            temp = temp->next;
            i++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        ListNode* temp = new ListNode(val);
        temp->next = head;
        if(head != nullptr) {
            head->prev = temp;
        }
        head = temp;
    }
    
    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        
        if(head == nullptr) {
            head = newNode;
            return;
        }

        ListNode* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0) {
            addAtHead(val);
            return;
        }

        ListNode* temp = head;
        int check = 0;

        while(temp != nullptr && check < index - 1) {
            temp = temp->next;
            check++;
        }

        if(temp == nullptr) return;

        ListNode* newNode = new ListNode(val);

        newNode->next = temp->next;
        newNode->prev = temp;

        if(temp->next != nullptr) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr || index < 0) return;

        if(index == 0) {
            ListNode* temp = head;
            head = head->next;
            if(head != nullptr) head->prev = nullptr;
            delete temp;
            return;
        }

        ListNode* temp = head;
        int i = 0;

        while(temp != nullptr && i < index) {
            temp = temp->next;
            i++;
        }

        if(temp == nullptr) return;

        if(temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }
        if(temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }

        delete temp;
    }
};