class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int x:arr)m[x]++;
        unordered_set<int> s;
        for(auto x:m){
            if(s.count(x.second) == 0)s.insert(x.second);
            else return false;
        }
        return true;
    }
};