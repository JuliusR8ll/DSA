class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long res = 0;
        int m = *max_element(nums.begin(),nums.end());
        int cnt = 0,j=  0;
        for(int i = 0;i<nums.size();i++){
            cnt += nums[i] == m;
            while(cnt >= k){
                cnt -= nums[j++] == m;
            }
            res += j;
        }
        return res;
    }
};