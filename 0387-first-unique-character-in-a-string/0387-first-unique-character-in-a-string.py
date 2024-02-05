class Solution:
    def firstUniqChar(self, s: str) -> int:
        count = defaultdict(int)
        for x in s:
            count[x]+=1
        for i,x in enumerate(s):
            if count[x] == 1:
                return i
        return -1