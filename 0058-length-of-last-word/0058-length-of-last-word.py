class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # 1. return len(s.split()[-1])
        # 2.
        *arr, elem = s.split()
        return len(elem)