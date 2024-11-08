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
    int px=0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root==nullptr)
            return nullptr;
        bstToGst(root->right);
        px+=root->val;
        root->val=px;
        bstToGst(root->left);
        return root;
    }
};