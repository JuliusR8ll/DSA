class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        v = [0]*n
        stk = []
        for i in range(n-1,-1,-1):
            while len(stk) and temperatures[i] >= temperatures[stk[-1]]:
                stk.pop()
            v[i] = stk[-1] - i if len(stk) > 0 else 0
            stk.append(i)
        return v
