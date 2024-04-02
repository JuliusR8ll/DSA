class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(int i = 0;i<nums.size();i++){
            sep(nums[i],res);
        }
        return res;
    }
    private:
    void sep(int n,vector<int> &res){
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n = n/10;
        }
        for(int i = v.size()-1;i>=0;i--){
            res.push_back(v[i]);
        }
    }
};