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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)
                return {};
        vector<vector<int>> ans;
        queue<TreeNode*> curr;
        curr.push(root);
        while(!curr.empty())
        {
            int depth=curr.size();
            vector<int> level;
            for(int i=0;i<depth;i++)
            {
                TreeNode* node=curr.front();
                curr.pop();
                level.push_back(node->val);
                if(node->left!=nullptr)
                    curr.push(node->left);
                if(node->right!=nullptr)
                    curr.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
