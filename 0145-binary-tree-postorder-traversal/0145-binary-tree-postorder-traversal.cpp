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
    void traverse(TreeNode* root, std::vector<int>& vec) {
        if (!root) {
            return;
        }
        traverse(root->left, vec);
        traverse(root->right, vec);
        vec.push_back(root->val);
    }
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> res;
        traverse(root, res);
        return res;
    }
};