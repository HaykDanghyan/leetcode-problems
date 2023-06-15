class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        while (begin <= end) {
            int mid = begin + (end - begin) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] < target) {
                begin = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return begin;
    }
};