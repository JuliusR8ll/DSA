class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int l,r;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 1){
                l = i;
            }
            else if(nums[i] == nums.size()){
                r = i;
            }
        }
        return (l <r)? l +nums.size()-1-r: l +nums.size()-2-r;
    }
};