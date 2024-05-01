class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        p,r = 0,0
        for i,x in enumerate(word):
            if(x == ch[p]):
                p+=1
            else: p = 0
            if(p == len(ch)):
                r = i+1
                break
        print(r)
        print(word[:r][::-1])
        print(word[r:])
        return word[:r][::-1] + word[r:]

