class Solution:
    def halveArray(self, nums: List[int]) -> int:
        heap = []
        sum = 0
        for x in nums:
            sum += x
            heapq.heappush(heap,-x)
        target_sum,cnt = sum/2,0
        while target_sum < sum:
            val = heapq.heappop(heap)/2
            sum += val
            heapq.heappush(heap,val)
            cnt += 1
        return cnt