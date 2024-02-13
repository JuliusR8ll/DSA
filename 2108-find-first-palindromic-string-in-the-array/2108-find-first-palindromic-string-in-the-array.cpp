class Solution {
public:
    bool isPal(string s){
        int l = 0,r = s.length()-1;
        while(l<r){
            if(s[l] != s[r])return false;
            l++;r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x: words){
            if(isPal(x)){
                return x;
            }
        }
        return "";
    }
};