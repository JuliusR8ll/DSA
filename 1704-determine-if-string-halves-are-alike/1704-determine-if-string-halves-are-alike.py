class Solution:
    def isVowel(self,a:chr) -> bool:
        if a == 'a' or a=='e'or a== 'i'or a== 'o'or a== 'u'or a== 'A'or a== 'E'or a== 'I'or a=='O'or a== 'U':
            return True
        return False
    def halvesAreAlike(self, s: str) -> bool:
        l,r = 0,len(s)//2
        lc,rc = 0,0
        while r<len(s):
            if self.isVowel(s[l]):
                lc += 1
            if self.isVowel(s[r]):
                rc += 1
            r+=1
            l+=1
        return lc == rc