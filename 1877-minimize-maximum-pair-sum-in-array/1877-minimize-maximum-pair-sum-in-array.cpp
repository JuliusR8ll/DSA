class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = 0,r = nums.size()-1;
        int out = 0;
        while(l<r){
            int s = nums[r--] + nums[l++];
            out = max(out,s);
        }
        return out;
    }
};