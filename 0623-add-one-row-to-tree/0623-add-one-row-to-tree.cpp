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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* curr = new TreeNode(val,root,NULL);
            return curr;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(--depth > 1){
            int s = q.size();
            for(int i = 0;i<s;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        while(q.empty() == 0){
            TreeNode* curr = q.front();
            TreeNode* tmpl = curr->left;
            TreeNode* tmpr = curr->right;
            q.pop();
            curr ->left = new TreeNode(val,tmpl,NULL);
            curr ->right = new TreeNode(val,NULL,tmpr);
        }
        return root;
    }
};