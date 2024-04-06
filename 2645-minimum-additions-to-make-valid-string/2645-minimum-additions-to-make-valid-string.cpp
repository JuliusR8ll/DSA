class Solution {
public:
    int addMinimum(string s) {
        int i = 0,res = 0;
        while(i<s.length()){
            (s[i] == 'a')? i++:res++;
            (s[i] == 'b')? i++:res++;
            (s[i] == 'c')? i++:res++;
        }
        return res;
    }
};