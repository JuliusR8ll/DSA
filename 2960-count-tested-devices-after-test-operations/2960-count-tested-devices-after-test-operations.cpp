class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int res = 0,sub = 0;
        for(int i = 0;i<batteryPercentages.size();i++){
            if(batteryPercentages[i]-sub >0){res++;sub++;}
        }
        return res;
    }
};