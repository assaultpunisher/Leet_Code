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
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        return helper(postorder.length - 1, 0, inorder.length - 1, inorder, postorder);
    }
    
    private TreeNode helper(int postEnd, int inStart, int inEnd, int[] inorder, int[] postorder){
        
        // 1. Base case.
        if (postEnd < 0 || inStart > inEnd) return null;
        
        // 2. Build a node.
        TreeNode cur = new TreeNode(postorder[postEnd]);
        
        // 3. Find the pivit in the inorder.
        int inPivot = 0;
        for (int i = 0; i < inorder.length; i++){
            if (inorder[i] == postorder[postEnd]){
                inPivot = i;
                break;
            }
        }
        
        // 4. return the node.
        cur.left  = helper(postEnd + inPivot - inEnd - 1, inStart, inPivot - 1, inorder, postorder);
        cur.right = helper(postEnd - 1, inPivot + 1, inEnd, inorder, postorder);
        return cur;
    }
}