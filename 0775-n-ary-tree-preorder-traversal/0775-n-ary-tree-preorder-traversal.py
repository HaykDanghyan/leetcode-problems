"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def traverse(self, root: 'Node', res: List[int]) -> None:
        if not root:
            return
        res.append(root.val)
        for child in root.children:
            self.traverse(child, res)

    def preorder(self, root: 'Node') -> List[int]:
        res = []
        self.traverse(root, res)
        return res