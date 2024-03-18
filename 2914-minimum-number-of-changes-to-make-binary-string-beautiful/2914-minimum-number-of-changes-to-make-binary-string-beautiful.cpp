class Solution {
public:
    int minChanges(string s) {
        int i = 0,j = 1,res = 0;
        while(j<s.length()){
            if(s[i] != s[j])res++;
            i+=2; j+=2;
        }
        return res;
    }
};