class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int sum1 = (n * (n + 1) )/ 2;
        int sum2 = 0;
        for (const auto& el : nums) {
            sum2 += el;
        }
        return abs(sum1 - sum2);
    }
};