class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum =0;
        int temp = x;
        while(temp){
            sum += temp%10;
            temp = temp/10;
        }
        if(x%sum)return -1;
        return sum;
    }
};