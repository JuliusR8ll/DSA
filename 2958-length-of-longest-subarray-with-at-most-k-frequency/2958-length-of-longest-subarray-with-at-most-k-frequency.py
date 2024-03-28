class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        dic = defaultdict(int)
        res,j,cnt = 0,0,0
        for i,x in enumerate(nums):
            dic[x] += 1
            while dic[x] > k:
                res = max(cnt,res)
                dic[nums[j]] -= 1
                j += 1
            cnt = i - j + 1
        return max(res,cnt)
