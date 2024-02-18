class Solution {
public:
    int alternateDigitSum(int n) {
        int s = log10(n) +1;
        bool neg;
        if(s%2)neg = 0;
        else neg = 1;
        int res = 0;
        while(n){
            if(neg){
                res -= n%10;
            }
            else res += n%10;
            neg = !neg;
            n = n/10;
        }
        return res;
    }
};