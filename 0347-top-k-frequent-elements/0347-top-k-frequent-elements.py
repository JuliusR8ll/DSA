class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        from collections import defaultdict
        import heapq
        d = defaultdict(int)
        for x in nums:
            d[x] += 1
        tp = []
        for x in d:
            heapq.heappush(tp,(-d[x],x))
        res = []
        while k:
            a,b = heapq.heappop(tp)
            res.append(b)
            k-=1
        return res
        