class MyHashSet {
public:
    ListNode* head;
    MyHashSet() {
        head = NULL;
    }
    
    void add(int key) {
        ListNode* temp = head;
        while(temp != NULL) {
            if(temp->val == key) return;         /* If key already exist then return */
            temp = temp->next;
        }

        if(head == NULL) 
           head = new ListNode(key);  
        else {
            temp = new ListNode(key);    //Add the key to the front of the linked list
            temp->next = head;
            head = temp;
        }
    }
    
    void remove(int val) {
        if(head == NULL) 
            return;
        
        //delete first Node
        if(head != NULL && head->val == val) {
            head = head->next;
            return;
        }
        
        //If key exist in between or last
        ListNode*cur = head;
        ListNode* tmp = NULL;
        while(cur != NULL) {
            if(cur->val == val) {
                tmp->next = cur->next;
                cur->next = NULL;
                delete cur;
                return;
            }
            tmp = cur;
            cur = cur->next;
        }
    }
    
    bool contains(int key) {
        ListNode* temp = head;
    
         while(temp != NULL) {
             if(temp->val == key) return true;
             temp = temp->next;
         }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
