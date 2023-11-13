class Solution {
public:
    bool isVowel(char a){
        a = tolower(a);
        return (a == 'a') ||(a == 'e') ||(a == 'i') || (a == 'o')||(a == 'u');
    }
    string sortVowels(string s) {
        vector<char> v;
        for(auto x:s){
            if(isVowel(x))v.push_back(x);
        }
        sort(v.begin(),v.end());
        int j = 0;
        string t;
        for(int i = 0;i<s.length();i++){
            if(isVowel(s[i])){
                t += v[j];
                j++;
            }
            else t+=s[i];
        }
        return t;
    }
};