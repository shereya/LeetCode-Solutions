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
    ArrayList<Integer>a=new ArrayList<>();
    public int kthSmallest(TreeNode root, int k) {
        inorderTraversal(root);
        return a.get(k-1);
    }
    public void inorderTraversal(TreeNode root)
    {
        if(root==null)
        {
            return;
        }
        inorderTraversal(root.left);
        a.add(root.val);
        inorderTraversal(root.right);
    }
}
