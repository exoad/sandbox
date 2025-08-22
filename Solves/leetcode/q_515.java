/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> largestValues(TreeNode root) {
        final var res = new ArrayList<Integer>();
        if(root == null) {
            return res;
        }
        final var queue = new ArrayDeque<TreeNode>();
        queue.offer(root);
        while(!queue.isEmpty()) {
            var depth = queue.size();
            var max = queue.peek().val;
            while(depth-- > 0) {
                final var current = queue.poll();
                if(current.val > max) {
                    max = current.val;
                }
                if(current.left != null) {
                    queue.offer(current.left);
                }
                if(current.right != null) {
                    queue.offer(current.right);
                }
            }
            res.add(max);
        }
        return res;
    }
}
