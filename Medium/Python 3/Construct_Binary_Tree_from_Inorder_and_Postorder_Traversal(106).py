# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> TreeNode:
        if not inorder:
            return None
        
        root_val = postorder.pop() 
        root = TreeNode(root_val) 
        inorder_idx = inorder.index(root_val) 
        
        left_nodes = inorder[:inorder_idx]
        right_nodes = inorder[inorder_idx + 1:]
        
        root.right = self.buildTree(right_nodes, postorder)  
        root.left = self.buildTree(left_nodes, postorder)
        
        return root