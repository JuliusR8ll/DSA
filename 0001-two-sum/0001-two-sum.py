class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        from collections import defaultdict
        d = defaultdict(int)
        for i,x in enumerate(nums):
            if target - x in d:
                return [i,d[target-x]]
            d[x] = i
        return []
        