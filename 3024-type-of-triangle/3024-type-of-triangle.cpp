class Solution {
public:
    string triangleType(vector<int>& nums) {
        int s1 = nums[0], s2 = nums[1],s3 = nums[2];
        if(s1 >= s2+s3 || s2 >= s1+s3 ||s3 >= s1+s2)return "none";
        unordered_set<int> s(nums.begin(),nums.end());
        if(s.size() == 1)return "equilateral";
        else if(s.size() == 2)return "isosceles";
        return "scalene";
    }
};