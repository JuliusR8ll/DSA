class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        for i in range(0,len(nums)):
            if(nums[i] == 0):nums[i] = -1
        dic = defaultdict(int)
        res,sum = 0,0
        for i,x in enumerate(nums):
            sum += x
            if sum == 0:res = i+1
            elif sum not in dic:
                dic[sum] = i
            else:
                res = max(res, i - dic[sum])
                print(res)
        return res