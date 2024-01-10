class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int sat = 0,i=0,j = 0;
        while(i<s.size() && j<g.size()){
            if(g[j] <= s[i]){
                sat++;
                i++;
            }
            j++;
        }
        return sat;
    }
};