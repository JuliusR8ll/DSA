class Solution {
public:
    int subSum(vector<int>& v){
        int res = v[0],sum = v[0];
        for(int i = 1;i<v.size();i++){
            sum = max(v[i],sum + v[i]);
            res = max(res,sum);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int mxSum =subSum(nums);
        if(mxSum <0)return mxSum;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0;i<nums.size();i++){
            nums[i] = -nums[i];
        }
        int minSum = subSum(nums);
        return  max(totalSum + minSum,mxSum);
    }
};