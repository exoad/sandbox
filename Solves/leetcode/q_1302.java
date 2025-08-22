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
    public int deepestLeavesSum(TreeNode root) {
        var i = root.val;
        final var queue = new ArrayDeque<TreeNode>();
        queue.offer(root);
        while(!queue.isEmpty()) {
            var depth = queue.size();
            i = 0;
            while(depth-- > 0) {
                final var current = queue.poll();
                i += current.val;
                if(current.left != null) {
                    queue.offer(current.left);
                }
                if(current.right != null) {
                    queue.offer(current.right);
                }
            }
        }  
        return i;
    }
}
