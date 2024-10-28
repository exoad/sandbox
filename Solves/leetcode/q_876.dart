/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class Solution {
  ListNode? middleNode(ListNode? head) {
    ListNode? a=head;
    ListNode? b=head;
    while(b!=null&&b.next!=null){
        a=a!.next;
        b=b?.next?.next;
    }
    return a;
  }
}