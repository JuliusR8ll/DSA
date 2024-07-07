class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        int n = numBottles/numExchange, rem = numBottles%numExchange ;
        while(n){
            res += n;
            n += rem;
            rem = n%numExchange;
            n /= numExchange;
        }
        return res;
    }
};