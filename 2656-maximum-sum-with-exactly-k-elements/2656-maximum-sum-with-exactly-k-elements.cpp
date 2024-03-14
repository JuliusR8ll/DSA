class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int m = *max_element(nums.begin(), nums.end());
        int res = 0;
        while(k--){
            res += m;
            m += 1;
        }
        return res;
    }
};