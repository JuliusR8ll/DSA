class Solution:
    from collections import defaultdict
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = defaultdict(list)
        for x in strs:
            cnt = [0]*26
            for c in x:
                cnt[ord(c)- ord('a')] += 1
            d[tuple(cnt)].append(x)
        return list(d.values())
            

           