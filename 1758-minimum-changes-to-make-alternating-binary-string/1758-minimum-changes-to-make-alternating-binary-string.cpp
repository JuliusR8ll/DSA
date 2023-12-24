class Solution {
public:
    int minOperations(string s) {
        char c = '0';
        int leftCnt = 0;
        for(int i = 0;i<s.length();i++){
            if(c == s[i]){
                leftCnt++;
            }
            c = (c == '0') ? '1' : '0';
        }
        int rightCnt = 0;
        c = '1';
        for(int i = 0;i<s.length();i++){
            if(c == s[i]){
                rightCnt++;
            }
            c = (c == '0') ? '1' : '0';
        } 
        return min(leftCnt,rightCnt);
    }
};