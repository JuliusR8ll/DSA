class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m1,m2;
        for(char c:s)m1[c]++;
        for(char c:t)m2[c]++;
        int res = 0;
        for(auto &x:m1){
            if(m2.count(x.first)){
                if(x.second > m2[x.first])res +=  x.second - m2[x.first];
            }
            else
                res += x.second;
        }
        return res;
    }
};