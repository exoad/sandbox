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
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr||headB==nullptr)
            return nullptr;
        ListNode* ax=headA;
        ListNode* bx=headB;
        while(ax!=bx)
        {
            ax=ax==nullptr?headB:ax->next;
            bx=bx==nullptr?headA:bx->next;
        }
        return bx;
    }
};