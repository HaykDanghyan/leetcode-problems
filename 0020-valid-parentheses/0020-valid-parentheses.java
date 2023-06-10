class Solution {
    public boolean isValid(String s) {
        char[] chars = s.toCharArray();
        if(chars.length==0 || chars.length==1) return false;
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < chars.length; ++i) {
            if (chars[i] == '(' || chars[i] == '[' || chars[i] == '{') {
                stack.push(chars[i]);
            } else {
                if (stack.empty()) {
                    return false;
                }
                char top = stack.peek();
                if (isPair(top, chars[i])) {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }

    private boolean isPair(char left, char right){
        return left == '[' && right == ']' || left == '{' && right == '}' || left == '(' && right == ')';
    }
}