class Solution {
public:
    int similarPairs(vector<string>& words) {
        int res = 0;
        for(int i = 0;i<words.size()-1;i++){
            unordered_set<char> st1(words[i].begin(),words[i].end());
            for(int j = i+1;j<words.size();j++){
                unordered_set<char> st2(words[j].begin(),words[j].end());
                if(st1 == st2)res++;
            }
        }
        return res;
    }
};