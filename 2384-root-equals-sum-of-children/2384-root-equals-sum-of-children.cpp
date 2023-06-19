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
    void valid(TreeNode* root, bool& res) {
        if (root == nullptr) {
            res = false;
            return;
        }
        if (!root->left || !root->right) {
            res = false;
            return;
        }
        if (root->val == root->left->val + root->right->val) {
            res = true;
            return;
        }
        valid(root->left, res);
        valid(root->right, res);
    }
    bool checkTree(TreeNode* root) {
        bool res = false;
        valid(root, res);
        return res;
    }
};