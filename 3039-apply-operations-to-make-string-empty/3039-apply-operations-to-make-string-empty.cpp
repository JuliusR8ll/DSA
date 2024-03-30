class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        unordered_set<char> c;
        int m = 0;
        for(int i = 0;i<26;i++){
            if(v[i]>m){
                c.clear();
                c.insert('a' + i);
                m = v[i];
            }
            else if(v[i] == m){
                c.insert('a' + i);
            }
        }
        int j = c.size();
        string r(j,'a');
        for(int i = s.length()-1;(i>=0 && j>0);i--){
            if(c.count(s[i])){
                c.erase(s[i]);
                r[--j] = s[i];
            }
        }
        return r;
    }
};