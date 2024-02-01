class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i = 0;i<nums.size()-2;i++){
            if(abs(nums[i]-nums[i+1]) <= k && abs(nums[i]-nums[i+2]) <= k){
                v.push_back({nums[i],nums[i+1],nums[i+2]});
                i+=2;
            }
            else return {};
        }
        return v;
    }
};