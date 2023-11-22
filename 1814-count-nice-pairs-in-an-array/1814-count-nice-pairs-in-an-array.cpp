class Solution {
public:
    int rev(int n){
        int r = 0;
        while(n){
            r = 10*r + (n%10);
            n = n/10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<long long,long long> m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i] - rev(nums[i])]++;
        }
        long long res = 0;
        for(auto x:m){
            if(x.second == 1){
                continue;
            }
            else
                res += (long long)((x.second)*(x.second-1))/2;
                res = res%1000000007;
        }
        return res;
    }
};