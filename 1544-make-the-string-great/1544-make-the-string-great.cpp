class Solution {
public:
  string makeGood(string s) {
    stack<char> stk;
    for(int i = 0;i<s.length();i++){
        if(stk.empty() == 0 &&( stk.top() == s[i] + 32 || stk.top() + 32 == s[i])){
            stk.pop();
        }
        else stk.push(s[i]);
    }
    string res;
    while(stk.empty() == 0){
        res += stk.top();
        stk.pop();
    }
    reverse(res.begin(),res.end());
    return res;
  }
};