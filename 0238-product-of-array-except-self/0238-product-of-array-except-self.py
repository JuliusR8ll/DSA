class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l,r = [nums[0]],[nums[len(nums)-1]]
        lp,rp = 1,len(nums)-2
        while rp+1:
            l.append(l[lp-1]*nums[lp])
            r.append(r[lp-1]*nums[rp])
            lp+=1
            rp-=1
        #[1,2,6,24] [24,24,12,4]
        r = r[::-1]

        res = [0]*len(nums)
        for i in range(len(nums)):
            if i-1 == -1:
                res[i] = r[i+1]
            elif i +1 == len(nums):
                res[i] = l[i-1]
            else:res[i] = l[i-1]*r[i+1]
        return res