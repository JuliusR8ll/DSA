class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x:nums)m[x]++;
        int res = 0,freq =0;
        for(auto x:m){
            if(x.second > freq){
                freq = x.second;
                res = freq;
            }
            else if(x.second == freq)res += freq;
        }
        return res;
    }
};