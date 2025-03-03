class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v1,v2;
        int pc = 0;
        for(auto x:nums){
            if(x > pivot){
                v2.push_back(x);
            } 
            else if(x < pivot){
                v1.push_back(x);
            }
            else pc++;
        }
        while(pc--){
            v1.push_back(pivot);
        }
        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;
    }
};