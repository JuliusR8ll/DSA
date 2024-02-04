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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)return {};
        vector<vector<int>> v;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        bool ryt = 0;
        s1.push(root);
        while(!s1.empty() || !s2.empty()){
            vector<int> vec1;
            while(!s1.empty()){
                TreeNode* tmp = s1.top();
                    s1.pop();
                    vec1.push_back(tmp->val);
                    if(tmp ->left)s2.push(tmp->left);
                    if(tmp ->right)s2.push(tmp->right);
            }
            if(vec1.size())
            v.push_back(vec1);
            vector<int> vec2;
            while(!s2.empty()){
                TreeNode* tmp = s2.top();
                    s2.pop();
                    vec2.push_back(tmp->val);
                    if(tmp ->right)s1.push(tmp->right);
                    if(tmp ->left)s1.push(tmp->left);
            }
            if(vec2.size())
            v.push_back(vec2);
        }
        return v;
    }
};