class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        begin = 0
        end = len(nums) - 1
        while begin <= end:
            mid = begin + (end - begin) // 2
            if nums[mid] == target:
                return mid
            if nums[mid] < target:
                begin = mid + 1
            else:
                end = mid - 1
        return begin