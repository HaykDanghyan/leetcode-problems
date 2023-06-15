class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string res = "";
        for (int i = 0; i < strs[0].length(); ++i) {
            for (const auto& str: strs) {
                if (i == str.length() || str[i] != strs[0][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};