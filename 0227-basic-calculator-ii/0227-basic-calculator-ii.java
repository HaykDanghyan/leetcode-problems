class Solution {
    public int calculate(String s) {
        char[] charArr = s.toCharArray();
        Stack<Integer> st = new Stack<>();
        int sum = 0;
        char op = '+';
        int curr = 0;
        for (int i = 0; i < charArr.length; ++i) {
            if (Character.isDigit(charArr[i])) {
                curr = curr * 10 + (charArr[i] - '0');
            }
            if ((!Character.isDigit(charArr[i]) && charArr[i] != ' ') || (i == charArr.length - 1)) {
                if(op == '+') {
                    st.push(curr);
                } 
                else if (op == '-') {
                    st.push(-curr);
                }
                else if (op == '*') {
                    st.push(curr * st.pop());
                }
                else if (op == '/') {
                    st.push(st.pop() / curr);
                }
                op = charArr[i];
                curr = 0;
            }
        }

        while (!st.isEmpty()) {
            sum += st.pop();
        }
        return sum;
    }
}
