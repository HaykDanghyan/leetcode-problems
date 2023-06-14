/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, int& min, int& prev) {
        if (!root) {
            return;
        }
        helper(root->left, min, prev);
        min = std::min(min, abs(prev - root->val));
        prev = root->val;
        helper(root->right, min, prev);
    }
    int getMinimumDifference(TreeNode* root) {
        int min = INT_MAX;
        int prev = INT_MAX;
        helper(root, min, prev);
        return min;
    }
};