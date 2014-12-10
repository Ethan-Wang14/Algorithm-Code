import util.TreeNode;

public class PreorderTraversal{
	public List<Integer> preorderTraversal(TreeNode root) {
		//this is version 1 using recurrsion
		List<Integer> result = new ArrayList<Integer>();
		if(root == null) {
			return result;
		}
		
		result.add(root.val);
		result.addAll(preorderTraversal(root.left));
		result.addAll(preorderTraversal(root.right));

		return result;

		//this is the version 2 using stack (recommended)
		Stack<TreeNode> stack = new Stack<TreeNode>();
		List<Integer> preorder = new ArrayList<Integer>();

		if(root == null) {
			return preorder;
		}
		
		stack.push(root);
		while(!stack.empty()) {
			TreeNode node = stack.pop;
			preorder.add(node.val);
			if(node.right != null) {
				stack.push(node.right);
			}
			if(node.left != null) {
				stack.push(node.left);
			}
		}
		
		return preorder;
	}
}
