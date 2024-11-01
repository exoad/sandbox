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
    TreeNode* child;
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root->left!=nullptr)
        {
            child=removeLeafNodes(root->left,target);
            if(child==nullptr)
                root->left=nullptr;
        }
        if(root->right!=nullptr)
        {
            child=removeLeafNodes(root->right,target);
            if(child==nullptr)
                root->right=nullptr;
        }
        if(root->val==target&&root->left==nullptr&&root->right==nullptr)
            root=nullptr;
        return root;
    }
};