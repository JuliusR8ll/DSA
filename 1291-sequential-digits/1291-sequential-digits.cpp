class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v;
        queue<int> q({1,2,3,4,5,6,7,8,9});
        while(!q.empty()){
            int n = q.front();
            if(n > high)break;
            if(n >= low){
                v.push_back(n);
            }
            q.pop();
            int ones = n%10;
            if(ones == 9)continue;
            q.push(n*10 +ones+1);
        }
        return v;
    }
};