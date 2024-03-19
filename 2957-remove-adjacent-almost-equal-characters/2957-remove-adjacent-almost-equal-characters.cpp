class Solution {
public:
    int removeAlmostEqualCharacters(string s) {
        int res = 0;
        for(int i = 0;i<s.length()-1;i++){
            if(abs(s[i]- s[i+1]) < 2){
                res++;i++;
            }
        }
        return res;
    }
};