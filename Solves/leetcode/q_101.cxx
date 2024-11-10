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
    bool p(TreeNode* right,TreeNode* left)
    {
        return right==nullptr&&left==nullptr?true:right==nullptr||left==nullptr?false:right->val==left->val&&p(right->right,left->left)&&p(right->left,left->right);
    }
    bool isSymmetric(TreeNode* root) {
        return root==nullptr||(root->left==nullptr&&root->right==nullptr)?true:root->left==nullptr||root->right==nullptr?false:p(root->right,root->left);
    }
};
