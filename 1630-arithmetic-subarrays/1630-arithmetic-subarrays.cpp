class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v(l.size());
        vector<int> vec(nums);
        for(int i = 0;i<l.size();i++){
            int s = l[i], e = r[i];         
            sort(vec.begin()+s,vec.begin()+e+1);
            int d = vec[s+1] - vec[s]; 
            for(int j = s;j<e;j++){
                if(vec[j+1] - vec[j] != d){
                    v[i] = false;
                    break;
                }
                v[i] = true;
            }
            vec = nums;
        }
        return v;
    }
};