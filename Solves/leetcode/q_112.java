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
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(root == null) {
            return false;
        }
        final var stack = new ArrayDeque<TreeNode>();
        final var sum = new ArrayDeque<Integer>();
        stack.push(root);
        sum.push(root.val);
        while(!stack.isEmpty()) {
            final var current = stack.pop();
            final var currentSum = sum.pop();
            if(current.left == null && current.right == null && currentSum == targetSum) {
                return true;
            }
            if(current.left != null) {
                stack.push(current.left);
                sum.push(currentSum + current.left.val);
            }
            if(current.right != null) {
                stack.push(current.right);
                sum.push(currentSum + current.right.val);
            }
        }
        return false;
    }
}
