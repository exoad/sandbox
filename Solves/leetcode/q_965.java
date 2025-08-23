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
    public boolean isUnivalTree(TreeNode root) {
        final var queue = new ArrayDeque<TreeNode>();
        final var target = root.val;
        queue.offer(root);
        while(!queue.isEmpty()) {
            var depth = queue.size();
            while(depth-- > 0) {
                final var current = queue.pop();
                if(current.val != target) {
                    return false;
                }
                if(current.left != null) {
                    if(current.left.val != target) {
                        return false;
                    }
                    queue.offer(current.left);
                }
                if(current.right != null) {
                    if(current.right.val != target) {
                        return false;
                    }
                    queue.offer(current.right);
                }
            }
        }
        return true;
    }
}
