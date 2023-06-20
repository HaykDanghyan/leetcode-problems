class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> result;
        for (int i = 0; i < n; ++i) {
            result.push_back(nums[i]);
            result.push_back(nums[n + i]);
        }
        return result;
    }
};