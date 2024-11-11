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
// hella slow LOL
class Solution {
public:
    ListNode* start=nullptr;
    int p(int k,int c,ListNode* node)
    {
        if(node==nullptr)
            return 1;
        if(c==k)
            start=node;
        int back=p(k,++c,node->next);
        if(back==k)
            swap(start->val,node->val);
        return ++back;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==nullptr)
            return nullptr;
        p(k,1,head);
        return head;
    }
};