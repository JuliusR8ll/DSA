class Solution {
public:
    bool isPalindrome(string s) {
        int l= 0,r = s.length()-1;
        while(l<r){
            s[l] = tolower(s[l]);
            s[r] = tolower(s[r]);
            if((s[l] <'a' || s[l] >'z') && !isdigit(s[l])){
                l++;
                continue;
            }
            if((s[r] <'a' || s[r] >'z') && !isdigit(s[r])){
                r--;
                continue;
            }
            if(s[l] != s[r])return false;
            l++;r--;
        }
        return true;
    }
};