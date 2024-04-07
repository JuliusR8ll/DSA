class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res = 0,n = nums.size();
        for(int i = n-n/2;i<n;i++){
            if(2*nums[res] <= nums[i])res++;
        }
        return 2*res;
    }
};