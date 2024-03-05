class Solution {
public:
    int minimumLength(string s) {
        int res = s.length(), l = 0 , r = res -1;
        while(l<r){
            if(s[l] != s[r])break;
            res -= 2;
            while(l+1<r && s[l] == s[l+1]){
                l++;
                res--;
            }
            while(l<r-1 && s[r] == s[r-1]){
                r--;
                res--;
            }
            l++;
            r--;
        }
        return res;
    }
};