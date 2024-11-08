/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int h(TreeNode*node,int&d)
    {
        if(node==nullptr)
            return 0;
        int l=h(node->left,d);
        int r=h(node->right,d);
        d=max(1+l+r,d);
        return max(l,r)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int a=-1;
        h(root,a);
        return a-1;
    }
};