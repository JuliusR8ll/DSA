/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* root, int t, int s) {
        if (root == NULL) {
            if (s == t )
                return true;
            return false;
        }
        s += root->val;
        if(root->left && root->right)
            return dfs(root->left, t, s) || dfs(root->right, t, s);
        else if(root->left)return dfs(root->left, t, s);
        else return dfs(root->right, t, s);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        if (root == NULL)
            return false;
        return dfs(root, targetSum, sum);
    }
};