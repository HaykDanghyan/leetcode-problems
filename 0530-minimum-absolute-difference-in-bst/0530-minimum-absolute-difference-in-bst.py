# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    prev = 2 ** 32 - 1
    min_val = prev
    def helper(self, root: Optional[TreeNode]) -> None:
        if not root:
            return
        self.helper(root.left)
        self.min_val = min(self.min_val, abs(root.val - self.prev))
        self.prev = root.val
        self.helper(root.right)

    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:    
        self.helper(root)
        return self.min_val