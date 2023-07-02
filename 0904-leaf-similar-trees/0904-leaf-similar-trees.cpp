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
    void getLeaves(TreeNode* root, std::vector<int>& vec) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            vec.push_back(root->val);
        }
        getLeaves(root->left, vec);
        getLeaves(root->right, vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) {
            return true;
        }
        if (!root1 || !root2) {
            return false;
        }
        std::vector<int> first;
        std::vector<int> second;
        getLeaves(root1, first);
        getLeaves(root2, second);
        return first == second;
    }
};