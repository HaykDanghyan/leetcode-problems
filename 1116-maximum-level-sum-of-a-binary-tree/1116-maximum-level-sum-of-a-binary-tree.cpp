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
    int maxLevelSum(TreeNode* root) {
        std::queue<TreeNode*> q;
        q.push(root);
        int max_lvl = 1;
        int lvl = 1;
        int max_sum = INT_MIN;
        while (!q.empty()) {
            int level_sum = 0;
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                auto top = q.front();
                q.pop();
                level_sum += top->val;
                if (top->left) {
                    q.push(top->left);
                }
                if (top->right) {
                    q.push(top->right);
                }
            }
            if (level_sum > max_sum) {
                max_sum = level_sum;
                max_lvl = lvl;
            }

            ++lvl;
        }
        return max_lvl;
    }
};