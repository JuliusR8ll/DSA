class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int beauty = 0;
        for (int i = 0; i < s.length(); i++) {
            int c = 0, v = 0;
            for (int j = i; j < s.length(); j++) {
                if (isVowel(s[j])) {
                    v++;
                } else
                    c++;
                if (v == c && (v * c) % k == 0) {
                    beauty++;
                }
            }
        }
        return beauty;
    }

private:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return 1;
        return 0;
    }
};