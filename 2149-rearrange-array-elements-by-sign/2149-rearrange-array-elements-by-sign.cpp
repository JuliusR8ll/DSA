class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p,n;
        for(int x: nums){
            if(x <0)n.push_back(x);
            else p.push_back(x);
        }
        int i = 0;
        while(2*i<nums.size()-1){
            nums[2*i] = p[i];
            nums[2*i +1] = n[i];
            i++;
        }
        return nums;
    }
};