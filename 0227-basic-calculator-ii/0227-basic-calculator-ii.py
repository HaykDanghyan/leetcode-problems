class Solution:
    def calculate(self, s: str) -> int:
        curr = 0
        op = '+'
        st = []
        for i in range(len(s)):
            if s[i].isdigit():
                curr = curr * 10 + int(s[i])
            if not s[i].isdigit() and s[i] != ' ' or i == len(s) - 1:
                if op == '+':
                    st.append(curr)
                elif op == '-':
                    st.append(-curr)
                elif op == '*':
                    st.append(st.pop() * curr)
                elif op == '/':
                    st.append(int(st.pop() / curr))
                op = s[i]
                curr = 0
        return sum(st)