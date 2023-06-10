class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = mp.find(target - nums[i]);
            if (it != mp.end()) {
                return { it->second, i };
            } else {
                mp.insert({nums[i], i});
            }
        }
        return {-1, -1};
    }
};