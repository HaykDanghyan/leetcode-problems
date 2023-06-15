class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int copy = x;
        long reverse = 0;
        while (copy != 0) {
            int rem = copy % 10;
            reverse = reverse * 10 + rem;
            copy /= 10;
        }
        return reverse == x;
    }
}