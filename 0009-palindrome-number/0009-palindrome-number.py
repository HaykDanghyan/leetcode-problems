class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        copy = x
        reverse = 0
        while copy != 0:
            reminder = copy % 10
            reverse = reverse * 10 + reminder
            copy //= 10
        return reverse == x