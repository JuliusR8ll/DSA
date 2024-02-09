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
    void dfs(TreeNode* root,TreeNode* &prev,int &res){
        if(root == NULL)return;
        dfs(root->left,prev,res);
        if(prev)res = min(res,abs(prev->val - root->val));
        prev = root;
        dfs(root->right,prev,res);
    }
    int getMinimumDifference(TreeNode* root) {
        int res = INT_MAX;
        TreeNode* prev = NULL;
        dfs(root,prev,res);
        return res;
    }
};