class Solution {
public:
    int lengthOfLastWord(std::string s) {
        while (*(s.end() - 1) == ' ') {
            s.pop_back();
        }
        int len = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == ' ') {
                break;
            }
            ++len;
        }
        return len;
    }
};