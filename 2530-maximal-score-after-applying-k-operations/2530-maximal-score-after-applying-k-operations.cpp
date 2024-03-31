class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long res = 0;
        priority_queue<int> pq(nums.begin(),nums.end());
        while(k--){
            int t = pq.top();
            res += t;
            pq.pop();
            pq.push(ceil((double)(t/3.0)));
        }
        return res;
    }
};