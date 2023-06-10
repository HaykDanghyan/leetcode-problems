class Solution {
public:
    bool isValid(std::string chars) {
        if(chars.length() == 0 || chars.length() == 1) return false;
        std::stack<char> stack;
        for (int i = 0; i < chars.length(); ++i) {
            if (chars[i] == '(' || chars[i] == '[' || chars[i] == '{') {
                stack.push(chars[i]);
            } else {
                if (stack.empty()) {
                    return false;
                }
                char top = stack.top();
                if (isPair(top, chars[i])) {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        return stack.empty();
    }
private:
    bool isPair(char left, char right){
        return left == '[' && right == ']' || left == '{' && right == '}' || left == '(' && right == ')';
    }
};