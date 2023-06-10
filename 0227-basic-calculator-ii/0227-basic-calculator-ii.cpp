class Solution {
public:
    int calculate(std::string s) {
        if (s.empty()) {
            return 0;
        }
        std::stack<int> st;
        int curr = 0;
        int sum = 0;
        char op = '+';

        for (int i = 0; i < s.length(); ++i) {
            if (isdigit(s[i])) {
                curr = curr * 10 + (s[i] - '0');
            }
            if (!isdigit(s[i]) && s[i] != ' ' || i == s.length() - 1) {
                if (op == '+') {
                    st.push(curr);
                } 
                if (op == '-') {
                    st.push(-curr);
                }
                if (op == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * curr);
                }
                if (op == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / curr);
                }
                op = s[i];
                curr = 0;
            }
        }

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};