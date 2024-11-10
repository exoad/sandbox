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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode* lx=head;
        ListNode* rx=head->next;
        while(lx!=nullptr&&rx!=nullptr)
        {
            int lxi=lx->val;
            lx->val=rx->val;
            rx->val=lxi;
            rx!=nullptr?lx=rx->next:nullptr;
            lx!=nullptr?rx=lx->next:nullptr;
        }
        return head;
    }
};