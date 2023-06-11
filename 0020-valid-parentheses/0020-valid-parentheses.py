class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for ch in s:
            if ch == '(' or ch == '[' or ch == '{':
                st.append(ch)
            else:
                if len(st) == 0:
                    return False
                if self.isPair(st.pop(), ch):
                    continue
                else:
                    return False
        return len(st) == 0

    def isPair(self, left, right):
        return left == '[' and right == ']' or\
               left == '(' and right == ')' or\
               left == '{' and right == '}' 