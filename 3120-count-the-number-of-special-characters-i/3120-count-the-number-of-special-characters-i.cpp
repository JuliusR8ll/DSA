class Solution {
public:
    int numberOfSpecialChars(string word) {
        int res = 0;
        unordered_set<char> s,done;
        for(auto x:word){
            if(x <91){
                if(s.count(x + 32) && done.count(x) == 0){
                    res++;
                    done.insert(x);
                    done.insert(x+32);
                }
                else s.insert(x);
            }
            else{
                if(s.count(x - 32) && done.count(x) == 0){
                    res++;
                    done.insert(x);
                    done.insert(x-32);
                }
                else s.insert(x);
            }
        }
        return res;
    }
};