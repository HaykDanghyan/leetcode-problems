# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        return self.isValid(root, -(2 ** 64), (2 ** 64) - 1)

    def isValid(self, root: Optional[TreeNode], min_val: int, max_val: int) -> bool:
        if not root:
            return True
        if root.val >= max_val or root.val <= min_val:
            return False
        return self.isValid(root.left, min_val, root.val) and\
               self.isValid(root.right, root.val, max_val)
        