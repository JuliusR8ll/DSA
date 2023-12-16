class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        words = defaultdict(int)
        for x in s:
            words[x]+=1
        for x in t:
            words[x]-=1
            if words[x] == 0:
                del words[x]
        return len(words) == 0