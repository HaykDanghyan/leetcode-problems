/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxLevelSum(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        int max_lvl = 1;
        int lvl = 1;
        int max_sum = Integer.MIN_VALUE;
        while (!q.isEmpty()) {
            int size = q.size();
            int lvl_sum = 0;
            for (int i = 0; i < size; ++i) {
                TreeNode top = q.remove();
                lvl_sum += top.val;
                if (top.left != null) {
                    q.add(top.left);
                }
                if (top.right != null) {
                    q.add(top.right);
                }
            }
            if (lvl_sum > max_sum) {
                max_sum = lvl_sum;
                max_lvl = lvl;
            }
            ++lvl;
        }
        return max_lvl;
    }
}