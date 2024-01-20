class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)return true;
        if(flowerbed.size() == 1){
            if(n >1 || flowerbed[0] == 1)return false;
            return true;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0){n--;
                                         flowerbed[0] = 1;         }
        for(int i = 1;i<flowerbed.size()-1;++i){
            if(flowerbed[i] == 0){
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                    n--;
                    flowerbed[i] = 1;
                }
                if(n == 0)return true;
            }
        }
        if(flowerbed[flowerbed.size()-2] == 0 && flowerbed[flowerbed.size()-1] == 0)n--;
        return n <= 0;
    }
};