class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end());
        unordered_set<int> s;
        for(int x:nums1)s.insert(x);
        for(int x:nums2)s.insert(x);
        int n = nums1.size();
        int n1 = min((int)s1.size(),n/2), n2 = min((int)s2.size(),n/2);
        return min((int)s.size(),n1+n2);
    }
};