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
        unordered_set<ListNode*> ix;
        ListNode* tx=head;
        while(tx!=nullptr)
        {
            if(ix.find(tx)!=ix.end())
                return true;
            ix.insert(tx);
            tx=tx->next;
        }
        return false;
    }
};