class Solution {
public:
    int minTimeToType(string word) {
        int res = 0;
        char curr = 'a';
        for(int i = 0 ;i<word.length();i++){
            int dis = abs(curr - word[i]);
            int d = min(dis,26-dis);
            res += d+1 ;
            curr = word[i];
        }
        return res;
    }
};