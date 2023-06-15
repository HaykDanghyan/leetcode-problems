# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        q = [root]
        max_lvl = 1
        lvl = 1
        max_sum = -(2 ** 32)
        while len(q) != 0:
            size = len(q)
            lvl_sum = 0
            for i in range(size):
                top = q.pop(0)
                lvl_sum += top.val
                if top.left:
                    q.append(top.left)
                if top.right:
                    q.append(top.right)
            if lvl_sum > max_sum:
                max_sum = lvl_sum
                max_lvl = lvl
            lvl += 1
        return max_lvl