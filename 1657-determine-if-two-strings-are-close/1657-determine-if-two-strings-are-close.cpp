class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length())return 0;
        unordered_map<char,int> m1,m2;
        int cng = 0;
        for(auto x : word1)m1[x]++;
        for(auto x : word2){
            if(m1.count(x) == 0)cng++;
            if(cng == 2 || cng == word1.size())return 0;
            m2[x]++;
        }
        
        vector<int> v1,v2;
        for(auto x:m1){
            v1.push_back(x.second);
        }
        for(auto x:m2){
            v2.push_back(x.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1 == v2;
    }
};