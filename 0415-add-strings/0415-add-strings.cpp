class Solution {
public:
    string addStrings(string num1, string num2) {
        int p1 = num1.length()-1,p2 = num2.length()-1;
        string s;
        int carry = 0;
        while(p1>=0 && p2 >= 0){
            int s1 = num1[p1] - '0';
            int s2 = num2[p2] - '0';
            int n = carry + s1 +s2;
            s += to_string(n%10);
            carry = n/10;
            p1--;p2--;        
        }
        while(p1>=0){
            int n = carry + num1[p1] - '0';
            s += to_string(n%10);
            carry = n/10;
            p1--;
        }
        while(p2>=0){
            int n = carry + num2[p2] - '0';
            s += to_string(n%10);
            carry = n/10;
            p2--;
        }
        if(carry >0)s += to_string(carry);
        reverse(s.begin(),s.end());
        return s;
    }
};