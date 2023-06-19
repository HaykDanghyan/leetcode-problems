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
    boolean result = false;
    private void valid(TreeNode root) {
        if (root == null) {
            result = false;
            return;
        }
        if (root.left == null || root.right == null) {
            result = false;
            return;
        }
        if (root.val == root.left.val + root.right.val) {
            result = true;
            return;
        }
        valid(root.left);
        valid(root.right);
    }
    public boolean checkTree(TreeNode root) {
        valid(root);
        return result;
    }
}