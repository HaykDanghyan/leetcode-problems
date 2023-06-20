class Solution {
    public int[] shuffle(int[] nums, int n) {
        int idx = 0;
        int[] arr = new int[2 * n];
        for (int i = 0; i < n; ++i) {
            arr[idx++] = nums[i];
            arr[idx++] = nums[n + i];
        }
        return arr;
    }
}