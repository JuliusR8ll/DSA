class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for(int x:arr)m[x]++;
        vector<int> v(arr.size()+1,0);
        for(auto x:m)v[x.second]++;
        int res = m.size();
        for(int i = 1;i<v.size();i++){
            if(v[i]*i <= k){
                res -= v[i];
                k -= v[i]*i;
            }
            else{
                res -= k/i;
                break;
            }
        }
        return res;
    }
};