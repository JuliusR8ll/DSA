class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n*(n+1)/2, sum2 = 0;
        for(int x:nums)sum2 += x;
        return sum1 - sum2;
    }
};