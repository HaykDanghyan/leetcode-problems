class Solution {
public:
    std::string removeStars(std::string s) {
        std::string c;
        for (const auto& el : s) {
            if (el == '*') {
                c.pop_back();
            } else {
                c += el;
            }
        }
        return c;
    }
};