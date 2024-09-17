class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> m;
        istringstream iss(s1);
        istringstream iss1(s2);
        string s;
        while(iss >> s){
            m[s]++;
        }
        while(iss1 >> s){
            m[s]++;
        }
        vector<string> v;
        for(auto x:m){
            if(x.second == 1)v.push_back(x.first);
        }
        return v;
    }
};