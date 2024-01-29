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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)return {};
        deque<TreeNode*> dq;
        vector<int> v;
        dq.push_back(root);
        //v.push_back(dq.back()->val);
        while(!dq.empty()){
            int s = dq.size();
            v.push_back(dq.back()->val);
            for(int i = 0;i<s;i++){
                TreeNode* curr = dq.front();
                dq.pop_front();
                if(curr->left)dq.push_back(curr->left);
                if(curr->right)dq.push_back(curr->right);
            }
            
        }
        return v;
    }
};