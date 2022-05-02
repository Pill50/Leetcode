/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        int lengthA = 0;
        int lengthB = 0;
        
        while(a->next != NULL){
            a = a->next;
            lengthA++;
        }
        while(b->next != NULL){
            b = b->next;
            lengthB++;
        }
        while(lengthA > lengthB){
            headA = headA->next;
            lengthA--;
        }
        while(lengthB > lengthA){
            headB = headB->next;
            lengthB--;
        }
        
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
        
    }
};
