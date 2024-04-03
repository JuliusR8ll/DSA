class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long res = 0;
        int l = 0,r = nums.size()-1;
        while(l<r){
            string s = to_string(nums[l]) + to_string(nums[r]);
            res += stoi(s);
            l++;r--;
        }
        if(l == r)res += nums[l];
        return res;
    }
};