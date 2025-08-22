/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null) {
            return null;
        }
        var list = new ListNode(0, head);
        var ptr = list;
        while(head != null) {
            if(head.next != null && head.next.val == head.val) {
                while(head.next != null && head.next.val == head.val) {
                    head = head.next;
                }
                ptr.next = head.next;
            } else {
                ptr = ptr.next;
            }
            head = head.next;
        }
        return list.next;
    }
}    
