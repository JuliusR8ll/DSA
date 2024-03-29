class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> m;
        int res = 0,l = 0,cnt=0;
        for(int r = 0; r<s.length();r++){
            m[s[r]]++;
            while(m[s[r]] > 2){
                m[s[l++]]--;
            }
            cnt = r -l +1;
            res = max(cnt,res);
        }
    return res;
    }
};