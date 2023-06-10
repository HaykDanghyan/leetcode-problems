class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (const auto& elem : nums2) {
            nums1.push_back(elem);
        }
        std::sort(nums1.begin(), nums1.end());
        int mid = nums1.size() / 2;
        if (nums1.size() % 2 != 0) {
            return (double)nums1[mid];
        }
        return ((double)nums1[mid] + (double)nums1[mid - 1]) / 2.0;
    }
};