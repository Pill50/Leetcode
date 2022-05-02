/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        
        ListNode* pre = NULL;
        ListNode* temp = head;
        
        while(temp != NULL){
            if(temp->val == val){
                // node head
                if(pre == NULL ) {
                    if(head->next == NULL) 
                        return NULL;
                    head = head->next;
                }
                else
                    pre->next = temp->next;
            }
            else
                 pre = temp;
           temp = temp->next;   
        }       
        return head;
    }
};
