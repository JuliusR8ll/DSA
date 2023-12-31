class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> m;
        int res = -1;
        for(int  i = 0;i<s.length();i++){
            if(m.find(s[i]) != m.end()){
                res = max(res,i-m[s[i]]-1);
            }
            else
                m[s[i]] = i;
        }
        return res;
    }
};