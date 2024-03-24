class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int res = 0,cnt = 0,s = 0;
        for(int i = 0;i<nums.size();i++){
            while(m[nums[i]] == k){
                res = max(res,cnt);
                cnt--;
                m[nums[s++]]--;
            }
            m[nums[i]]++;
            cnt++;
        }
        res = max(res,cnt);
        return res;
    }
};