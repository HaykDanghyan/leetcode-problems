class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> ht = new HashMap<>();
        for (int i = 0; i < nums.length; ++i) {
            int find = target - nums[i];
            if (ht.containsKey(find)) {
                return new int[] {ht.get(find), i};
            } else {
                ht.put(nums[i], i);
            }
        }
        return new int[] {-1, -1};
    }
}