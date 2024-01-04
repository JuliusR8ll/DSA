class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int x : nums) m[x]++;
        int res = 0;
        for(auto x:m){
            int v = x.second;
            if(v == 1)return -1;
            res += v/3;
            if(v%3)res++;
        }
        return res;
    }
};
