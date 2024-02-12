class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cnt,res = 0,nums[0]
        for x in nums:
            if x == res:cnt += 1
            else:cnt -= 1
            if cnt == 0:
                res = x
                cnt = 1
        return res