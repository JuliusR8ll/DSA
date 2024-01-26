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
    bool isSame(TreeNode* r,TreeNode* s){
        if(r == NULL && s == NULL)return 1;
        if(r == NULL || s == NULL)return 0;
        return (s->val == r ->val &&
                isSame(r->left,s->left) &&
                isSame(r->right,s->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL)return 1;
        if(root == NULL)return 0;
        if(root->val == subRoot->val){
            if(isSame(root,subRoot))return true;
        }
        if(isSubtree(root->left,subRoot))return 1;
        if(isSubtree(root->right,subRoot))return 1;;
        
        return false;
    }
};