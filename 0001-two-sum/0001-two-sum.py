class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ht = {}
        for i in range(len(nums)):
            find = target - nums[i]
            if find in ht:
                return [ht[find], i]
            else:
                ht[nums[i]] = i
        return [-1, -1]