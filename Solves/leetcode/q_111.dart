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
  int minDepth(TreeNode? root) {
    if(root==null){
        return 0;
    }
    if(root.left==null){
        return minDepth(root.right)+1;
    }
    if(root.right==null){
        return minDepth(root.left)+1;
    }
    return min(minDepth(root.right),minDepth(root.left))+1;
  }
}