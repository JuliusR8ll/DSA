class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> s;
        int res = -1;
        for(int x:nums){
            if(x<0)s.insert(x);
        }
        for(int x:nums){
            if(x > 0 && s.count(-x) && x > res){
                res = x;
            }
        }
        return res;
    }
};