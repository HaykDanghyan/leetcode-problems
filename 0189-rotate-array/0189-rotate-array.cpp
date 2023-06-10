class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // O(1) space
        k %= nums.size();
        std::reverse(nums.end() - k, nums.end());
        std::reverse(nums.begin(), nums.end() - k);
        std::reverse(nums.begin(), nums.end());

        // O(N) space
        // auto arr = nums;
        // for (int i = 0; i < nums.size(); ++i) {
        //     nums[(i + k) % nums.size()] = arr[i];
        // }
    }
};