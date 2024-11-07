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
class BSTIterator {
public:
    queue<int> ix;
    BSTIterator(TreeNode* root) {
        _p(root);
    }

    void _p(TreeNode* p)
    {
        if(p==nullptr)
            return;
        _p(p->left);
        ix.push(p->val);
        _p(p->right);
    }
    
    int next() {
        int p=ix.front();
        ix.pop();
        return p;
    }
    
    bool hasNext() {
        return !ix.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */