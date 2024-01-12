class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x:nums)m[x]++;
        int rows = 0;
        for(auto x:m){
            rows = max(rows,x.second);
        }
        vector<vector<int>> v(rows,vector<int>());
        for(int i =0;i<rows;i++){
            for(auto &x:m){
                if(x.second != 0){
                    v[i].push_back(x.first);
                    x.second--;
                }
            }
        }
        return v;
    }
};