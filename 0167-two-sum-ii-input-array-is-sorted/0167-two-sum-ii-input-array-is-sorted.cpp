class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        std::unordered_map<int, int> mp;
        for (int i = 0; i < numbers.size(); ++i) {
            auto it = mp.find(target - numbers[i]);
            if (it != mp.end()) {
                return {it->second + 1, i + 1};
            } else {
                mp.insert({numbers[i], i});
            }
        } 
        return {-1, -1};
    }
};