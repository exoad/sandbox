/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class Solution {
  List<int> values;
  Random rng;
  Solution(ListNode? head):values=<int>[],rng=Random() {
    ListNode? curr=head;
    while(curr!=null)
    {
        values.add(curr.val);
        curr=curr.next;
    }
  }
  
  int getRandom() {
    return values[rng.nextInt(values.length)];
  }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = Solution(head);
 * int param1 = obj.getRandom();
 */