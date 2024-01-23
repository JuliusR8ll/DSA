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
        if(root == NULL)return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> v;
        while(!q.empty()){
            int s = q.size();
            vector<int> row(s);
            for(int i = 0;i<s;i++){
                row[i] = q.front() -> val;
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            v.push_back(row);
        }
        return v;
    }
};