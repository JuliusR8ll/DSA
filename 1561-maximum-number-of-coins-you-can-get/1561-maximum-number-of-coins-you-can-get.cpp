class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int i = 1,attempts = 0,coins = 0;
        while(attempts <piles.size()/3){
            coins += piles[i];
            i += 2;
            attempts++;
        }
        return coins;
    }
};