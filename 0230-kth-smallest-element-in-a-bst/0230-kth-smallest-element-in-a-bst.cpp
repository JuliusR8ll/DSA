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
    void dfs(TreeNode* root,vector<int> &a,int k){
        if(root == NULL)return;
        if(a.size() == k)return;
        dfs(root->left,a,k);
        a.push_back(root->val);
        return dfs(root->right,a,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        dfs(root,v,k);
        return v[k-1];
    }
};