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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* c=head->next;
        ListNode* a=new ListNode(-1);
        ListNode* last=a;
        int s=0;
        while(c!=nullptr)
        {
            if(c->val==0)
            {
                ListNode* t=new ListNode(s);
                last->next=t;
                last=last->next;
                s=0;
            }
            else if(c->next!=0)
                s+=c->val;
            c=c->next;
        }
        return a->next;
    }
};