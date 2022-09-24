/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector <int> path;
        DFS(path, root, sum, res);
        return res;
    }
    
    void DFS(vector <int> path, TreeNode* root, int sum, vector<vector<int>> &res)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            if (root->val == sum)
            {
                path.push_back(root->val);
                res.push_back(path);
                path.pop_back();
            }
        }
        path.push_back(root->val);
        DFS(path, root->left, sum - root->val, res);
        DFS(path, root->right, sum - root->val, res);
        path.pop_back();
    }
};
