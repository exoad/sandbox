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
    bool hasCycle(ListNode *head) {
        if(head==nullptr)
            return false;
        ListNode* ax=head;
        ListNode* bx=head->next;
        while(bx!=nullptr&&bx->next!=nullptr)
        {
            ax=ax->next;
            bx=bx->next->next;
            if(ax==bx)
                return true;
        }
        return false;
    }
};