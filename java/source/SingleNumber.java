public class SingleNumber {
	public int singleNumber(int[] A) {
		int len = A.length;
		int sum = 0;
		for(int i = 0; i < len; i++) {
			sum = sum ^ A[i];
		}
		return sum;	
	}
	
	public static void main(String args[]) {
		SingleNumber sg = new SingleNumber();
		int[] a = new int[]{1,1,2,4,5,3,6,6,4,5,2};
		System.out.println("the result is " + sg.singleNumber(a));
	}
}
