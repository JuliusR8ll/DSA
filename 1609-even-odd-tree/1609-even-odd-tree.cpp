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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool odd = 1;
        while(!q.empty()){
            int s = q.size();
            odd = !odd;
            int n = (odd)? INT_MAX:INT_MIN;
            for(int i = 0;i<s;i++){
                TreeNode* curr = q.front();
                if(odd){
                    if((curr ->val)%2 || curr->val >= n)return false;
                }
                else{
                    if((curr ->val)%2 == 0 || curr->val <= n)return false;
                }
                q.pop();
                n = curr ->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        return true;
    }
};