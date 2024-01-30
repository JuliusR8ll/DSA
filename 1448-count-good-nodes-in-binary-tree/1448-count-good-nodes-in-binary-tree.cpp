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
    int res = 0;
    void dfs(TreeNode* root,int grt){
        if(!root)return;
        int v = root->val;
        if(v >= grt){
            res++;
            grt = v;
        }
        dfs(root->left,grt);
        dfs(root->right,grt);
    }
    int goodNodes(TreeNode* root) {
        dfs(root,INT_MIN);
        return res;
    }
};