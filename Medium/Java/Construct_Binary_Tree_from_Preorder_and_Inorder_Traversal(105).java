/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        
        return helper(0, 0, inorder.length - 1, preorder, inorder);
    }

    public TreeNode helper(int preStart, int inStart, int inEnd, int[] preorder, int[] inorder) {
        
        // 1. Base case
        if (preStart > preorder.length || inStart > inEnd){
            return null;
        }
        
        // 2. Build the current node.
        TreeNode cur = new TreeNode(preorder[preStart]);
        
        // 3. Find the pivot in the inorder.
        int inPivot = 0;
        for (int i = 0; i < inorder.length; i++){
            if (inorder[i] == preorder[preStart]){
                inPivot = i;
                break;
            }
        }
        
        // 4. return root.
        cur.left  = helper(preStart + 1, inStart, inPivot - 1, preorder, inorder);
        // key
        cur.right = helper(preStart + inPivot - inStart + 1, inPivot + 1, inEnd, preorder, inorder);
        return cur;
    }
}