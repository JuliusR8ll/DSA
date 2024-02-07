class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char c:s)m[c]++;    
        vector<pair<int,char>> v;
        for(auto x:m){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());
        string str = "";
        for(int i = v.size()-1;i>=0;i--){
            int n = v[i].first;
            while(n--){
                str += v[i].second;
            }
        }
        return str;
    }
};