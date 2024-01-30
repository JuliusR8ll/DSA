class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stk = []
        for x in tokens:
            if x in ["+", "-", "*", "/"]:
                b = stk.pop()
                a = stk.pop()
                if x == "+":
                    stk.append(a + b)
                elif x == "-":
                    stk.append(a - b)
                elif x == "*":
                    stk.append(a * b)
                elif x == "/":
                    stk.append(int(a / b))
            else:
                stk.append(int(x))
        return stk[-1]
