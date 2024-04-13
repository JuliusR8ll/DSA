class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long res = 1;
        int l = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i] != nums[i-1])res += (i-l)+1;
            else{
                l = i;
                res++;
            }
        }
        return res;
    }
};