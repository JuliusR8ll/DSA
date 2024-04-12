class Solution {
public:
    int trap(vector<int>& height) {
    int water = 0;
    vector<int> l_max(height.size());
    vector<int> r_max(height.size());
    l_max[0] = height[0];
    r_max[0] = height[height.size()-1];
    for(int i =1;i<height.size();i++){
        l_max[i] = max(l_max[i-1],height[i]);
        r_max[i] = max(r_max[i-1],height[height.size()-1-i]);

    }
    for(int i = 1;i<height.size()-1;i++){
        water += min(l_max[i],r_max[height.size()-1-i]) - height[i];
    }
    return water;
}
};