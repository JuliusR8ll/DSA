class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int res = 1, c = capacity[0], ind = 1;
        for(int i = 0;i<apple.size();i++){
            int a = apple[i];
            while(c < a){
                res++;
                a -= c;
                c = capacity[ind++];
            }
            c -= a;
        }
        return res;
    }
};