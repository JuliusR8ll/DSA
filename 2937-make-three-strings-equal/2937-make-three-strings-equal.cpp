class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int res = 0;
        if(s1[0] != s2[0] || s1[0] != s3[0] || s3[0] != s2[0])return -1;
        for(int i = 0;i<min({s1.length(),s2.length(),s3.length()});i++){
            if(s1[i] != s2[i] || s1[i] != s3[i] || s3[i] != s2[i])break;
            res++;
        }
        return s1.length()+s2.length()+s3.length() - 3*res;
    }
};