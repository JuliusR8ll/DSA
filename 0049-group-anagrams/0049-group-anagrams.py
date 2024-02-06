class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list)
        for x in strs:
            cnt = [0]*26
            for c in x:
                cnt[ ord(c) - ord('a')] += 1
            res[tuple(cnt)].append(x)
        return res.values()