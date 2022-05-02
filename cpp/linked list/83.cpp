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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        ListNode* tmp = head;
        ListNode* p = head->next;
        while(p != NULL) {
            if(p->val == tmp->val) {
                tmp->next = p->next;
                p->next = NULL;
                delete p;
                p = tmp;
            }
            tmp = p;
            p = p->next;
        }
        return head;
    }
};
