/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class Solution {
  ListNode? deleteDuplicates(ListNode? head) {
    List<int> seen=<int>[];
    ListNode? l=null;
    ListNode? curr=head;
    ListNode? tail=null;
    while(curr!=null){
        if(!seen.contains(curr.val)){
            if(l==null){
                l=new ListNode(curr.val,null);
                tail=l;
            }else{
                ListNode? r=new ListNode(curr.val,null);
                tail!.next=r;
                tail=r;
            }
            seen.add(curr.val);
        }
        curr=curr.next;
    }
    return l;
  }
}