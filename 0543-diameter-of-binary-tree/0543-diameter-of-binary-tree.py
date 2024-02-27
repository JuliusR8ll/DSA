# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:      
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        res = 0
        def height(root):
            nonlocal res
            if root == None:return 0
            lh = height(root.left)
            rh = height(root.right)
            res = max(lh+rh,res)
            return max(lh,rh) +1
        height(root)
        return res