class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<long long, long long> m;
        int mn = INT_MAX;
        for (int x : nums) {
            m[x]++;
            mn = min(mn, x);
        }
        long long res = 1;
        for (auto i : m) {
            long long n = i.first, a = 0;
            if (n == 1) {
                    if(!(m[1]&1)){
                        m[n]--;
                    }
                    res = max(res,m[n]);
            } else {
                while (1) {
                    if (m.count(n * n) && m[n] > 1 && m.size() > 1) {
                        a += 2;
                    } else {
                        a++;
                        break;
                    }
                    n = n * n;
                }
                res = max(res, a);
            }
        }

        return res;
    }
};