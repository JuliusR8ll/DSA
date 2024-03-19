class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int r = nums[0],res = 0;
        bool ryt;
        if(r > 0)ryt = 1;
        else ryt = 0;
        for(int i = 1;i<nums.size();i++){
            r += nums[i];
            if(ryt = 1 && r ==0){
                res++;
                ryt = 0;
            }
            else if(ryt = 0 && r == 0){
                res++;ryt = 1;
            }
        }
        return res;
    }
};