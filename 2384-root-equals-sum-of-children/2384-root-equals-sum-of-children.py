# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    

    def checkTree(self, root: Optional[TreeNode]) -> bool:
        res = False  
        def valid(root: Optional[TreeNode]) -> None:
            nonlocal res
            if not root:
                res = False
                return
            if not root.left or not root.right:
                res = False
                return
            if root.val == root.left.val + root.right.val:
                res = True
                return
            valid(root.left)
            valid(root.right)
        valid(root)
        return res