class Solution {
public:
    int minOperations(int k) {
        double curr = INT_MAX,i = 0,prev = INT_MAX;
        while(curr <= prev){
            prev = curr;
            curr = ceil(k/(i+1)) +i -1;
            i++;
        }
        return prev;
    }
};