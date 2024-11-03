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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum=nullptr;
        ListNode* last=nullptr;
        ListNode* a=l1;
        ListNode* b=l2;
        int c=0;
        while(a!=nullptr||b!=nullptr||c!=0)
        {
            int t=((a==nullptr?0:a->val)+(b==nullptr?0:b->val)+c);
            c=t>=10?1:0;
            ListNode* add=new ListNode(t%10);
            if(sum==nullptr)
            {
                sum=add;
                last=sum;
            }
            else
            {
                last->next=add;
                last=last->next;
            }
            a==nullptr?0:a=a->next;
            b==nullptr?0:b=b->next;
        }
        return sum;
    }
};
