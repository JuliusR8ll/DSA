class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = 0,res = 0;
        for(int i = s.length()-1;s[i] == ' ';i--){
            j++;
        }
        for(int i = s.length()-1-j;i >= 0;i--){
            if(s[i] == ' ')break;
            res++;
        }
        return res;
    }
};