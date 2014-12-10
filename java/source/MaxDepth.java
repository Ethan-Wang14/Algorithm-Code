import util.TreeNode;

public class MaxDepth {
	int max, leftDepth, right Depth;
	public int maxDepth(TreeNode root) {
		if(root == null) {
			return 0;
		}
		
		if(root.left != null) {
			leftDepth = maxDepth(root.left);
		}

		if(root.right != null) {
			rightDepth = maxDepth(root.right);
		}
		
		max = leftDepth > rightDepth ? leftDepth : rightDepth;

		max++;

		return max;
	}
	public static void main(String args[]) {
		
	}
}
