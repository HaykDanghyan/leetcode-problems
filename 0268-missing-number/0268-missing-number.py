class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        full_sum = (n * (n + 1)) // 2
        element_sum = 0
        for el in nums:
            element_sum += el
        return full_sum - element_sum