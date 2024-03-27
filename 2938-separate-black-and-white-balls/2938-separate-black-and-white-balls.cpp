class Solution {
public:
    long long minimumSteps(string s) {
        long long res = 0;
        int z = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '0'){
                res += i-z;
                z++;
            }
        }
        return res;
    }
};