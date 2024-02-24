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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty() == false){
            double s = q.size();
            double avg = 0.0;
            for(int i = 0;i<s;i++){
                TreeNode* curr = q.front();
                avg += (double)curr ->val;
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            v.push_back(avg/s);
        }
        return v;
    }
};