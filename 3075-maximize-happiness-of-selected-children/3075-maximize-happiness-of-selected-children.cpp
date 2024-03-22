class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long res = 0;
        sort(happiness.begin(),happiness.end());
        int i = 0;
        while(k--){
            int t = happiness[happiness.size()-1-i] - i;
            if(t < 0)break;
            res += t;
            i++;
            //happiness[0]--;
        }
        return res;
    }
};