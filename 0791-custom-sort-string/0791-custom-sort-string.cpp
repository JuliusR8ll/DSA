class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> m;
        for(int i = 0;i<order.size();i++){
            m[order[i]] = i;
        }
        for(int i = 0;i<s.size();i++){
            if(m.count(s[i]) == 0)continue;
            for(int j = i+1;j<s.size();j++){
                if(m.count(s[j]) == 0)continue;
                if(m[s[i]] > m[s[j]])swap(s[i],s[j]);
            }
        }
        return s;
    }
};