# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def traverse(self, root: Optional[TreeNode], lst: List[int]) -> None:
        if not root:
            return
        lst.append(root.val)
        self.traverse(root.left, lst)
        self.traverse(root.right, lst)

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        self.traverse(root, res)
        return res