class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int blkcnt = 0;
        for(int i = 0;i<k;i++){
            if(blocks[i] == 'B')blkcnt++;
        }
        int res = k-blkcnt;
        for(int i = k;i<blocks.size();i++){
            if(blocks[i-k] == 'B')blkcnt--;
            if(blocks[i] == 'B')blkcnt++;
            res = min(k-blkcnt,res);
        }
        return res;
    }
};