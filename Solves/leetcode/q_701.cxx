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
    TreeNode* p(TreeNode* root,int val)
    {
        if(root==nullptr)
            return new TreeNode(val);
        if(root->val>val)
            root->left=p(root->left,val);
        else if(root->val<val)
            root->right=p(root->right,val);
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return p(root,val);
    }
};