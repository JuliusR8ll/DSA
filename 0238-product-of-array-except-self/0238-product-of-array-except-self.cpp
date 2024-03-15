class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        int l =nums[0],r=nums[nums.size()-1];
        for(int i =1;i<nums.size();i++){
            res[i] = l;
            l *= nums[i];
        }
        for(int i = nums.size()-2;i>=0;i--){
            res[i] = res[i]*r;
            r *= nums[i];
        }
        return res;
    }
};