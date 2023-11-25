class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        vector<int> res(nums.size());
        int ls = 0;
        for(int i = 0;i<nums.size();i++){
            res[i] = nums[i]*i - ls +
                    + (total - ls) - nums[i]*(nums.size()-i);
            ls += nums[i];
        }
        return res;
    }
};