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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr)
            return nullptr;
        unordered_set<ListNode*> ix;
        ListNode* tx=head;
        while(tx!=nullptr)
        {
            if(ix.find(tx)!=ix.end())
                return tx;
            ix.insert(tx);
            tx=tx->next;
        }
        return nullptr;
    }
};