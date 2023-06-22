/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traverse(Node* root, std::vector<int>& vec) {
        if (!root) {
            return;
        }
        vec.push_back(root->val);
        for (auto child: root->children) {
            traverse(child, vec);
        }
    } 
    std::vector<int> preorder(Node* root) {
        std::vector<int> vec;        
        traverse(root, vec);
        return vec;
    }
};