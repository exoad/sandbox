/**
 * Definition for a binary tree node.
 * class TreeNode {
 *   int val;
 *   TreeNode? left;
 *   TreeNode? right;
 *   TreeNode([this.val = 0, this.left, this.right]);
 * }
 */
class Solution {
  int maxDepth(TreeNode? root) {
    if(root==null){
        return 0;
    }
    return max(maxDepth(root.left),maxDepth(root.right))+1;
  }
}