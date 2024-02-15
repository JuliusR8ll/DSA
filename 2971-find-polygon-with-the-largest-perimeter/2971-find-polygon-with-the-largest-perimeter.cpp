class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long sum = 0;
        for(int i = 0;i<n-1;i++){
            sum += nums[i];
        }
        if(sum > nums[n-1])return sum + nums[n-1];
        int r = n-2;
        while(r>=2){
            sum -= nums[r];
            if(sum > nums[r])return sum + nums[r];
            r--;
        }
        return -1;
    }
};