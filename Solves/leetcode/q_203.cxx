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
        vector<int> r;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            if(curr->val!=val)
                r.push_back(curr->val);
            curr=curr->next;
        }
        delete curr;
        if(r.size()==0)
            return nullptr;
        ListNode* t=new ListNode(r[0],nullptr);
        ListNode* h=t;
        for(int i=1;i<r.size();i++)
        {
            ListNode* y=new ListNode(r[i],nullptr);
            t->next=y;
            t=y;
        }
        return h;
    }
};