class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> l;
        set<int> w;
        for(int i = 0;i<matches.size();i++){
            w.insert(matches[i][0]);
            l[matches[i][1]]++;
        }
        vector<vector<int>> v(2,vector<int>());
        for(auto x:w){
            if(l.count(x) == 0){
                v[0].push_back(x);
            }
        }

        for(auto x:l){
            if(x.second == 1)v[1].push_back(x.first);
        }
        return v;
    }
};