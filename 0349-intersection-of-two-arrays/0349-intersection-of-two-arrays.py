class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        s = set()
        for x in  nums1:
            s.add(x)
        res = []
        for x in nums2:
            if x in s:
                res.append(x)
                s.discard(x)
        return res