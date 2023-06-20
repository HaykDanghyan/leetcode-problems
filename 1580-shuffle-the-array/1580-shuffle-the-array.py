class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        result = []
        for idx in range(n):
            result.append(nums[idx])
            result.append(nums[idx + n])
        return result