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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr)
            return head;
        ListNode* curr=head;
        ListNode* next=head->next;
        while(curr->next!=nullptr&&curr!=nullptr)
        {
            ListNode* now=new ListNode(__gcd(curr->val,next->val));
            curr->next=now;
            now->next=next;
            curr=next;
            next=next->next;
        }
        return head;
    }
};