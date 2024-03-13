class Solution:
    def pivotInteger(self, n: int) -> int:
        if n == 1: return 1
        lsum,rsum = 0,((n+1)*n)//2
        for i in range(1,n+1):
            lsum += i-1
            r = rsum - (lsum+i)
            if lsum == r: return i
        return -1 