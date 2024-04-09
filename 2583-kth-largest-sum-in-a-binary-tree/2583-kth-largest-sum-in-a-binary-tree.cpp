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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        queue<TreeNode*> q;
        q.push(root);
        while(k-- && q.empty() == 0){
            int s = q.size(); long long sum = 0;
            for(int i = 0;i<s;i++){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            pq.push(sum);
        }
        //cout << q.size() <<" "<<k;
        if(k >= 0 && q.empty())return -1;
        while(q.empty() == 0){
            int s = q.size();long long sum = 0;
            for(int i = 0;i<s;i++){
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            if(sum > pq.top()){
                pq.pop();
                pq.push(sum);
            }
        }
        return pq.top();
    }
};