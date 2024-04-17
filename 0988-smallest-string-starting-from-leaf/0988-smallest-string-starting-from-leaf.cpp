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
    string smallestFromLeaf(TreeNode* root) {
        return dfs(root,"");
    }
    private:
    string dfs(TreeNode* root, string curr){
        if(!root)return "";
        curr = char(root->val+'a') +curr;
        if(root->right && root->left){
            return min(dfs(root->right,curr),dfs(root->left,curr));
        }
        else if(root->right) return dfs(root->right,curr);
        else if(root->left) return dfs(root->left,curr);
        return curr;
    }
};