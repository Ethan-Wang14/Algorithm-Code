public class Spiral 
{
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> spiral = new ArrayList<Integer>();
        int m = matrix.length;
        if(m == 0)
        {
            return spiral;
        }
        int n = matrix[0].length;
        if(n == 0)
        {
            return spiral;
        }
        int round = m > n ? getRound(n) : getRound(m); //Calculate how many rounds to spiral
        for(int r = 0; r < round; r++)
        {
            for(int i = r; i < n - r; i++)
            {
                spiral.add(matrix[r][i]);
				//the last spiral remains a column, e.g, 3x5 -> 1x3 
                if((n >= m)&&(m % 2 == 1)&&(r == round - 1)&&(i == n - r - 1))
                {
                    return spiral;
                }
            }
            for(int j = r + 1; j < m - r; j++)
            {
                spiral.add(matrix[j][n - r - 1]);
				//the last spiral remains a row, e.g, 5x3 -> 3x1
                if((m > n)&&(n % 2 == 1)&&(r == round - 1)&&(j == m - r - 1))
                {
                    return spiral;
                }
            }
            for(int p = n - r - 2; p >= r; p--)
            {
                spiral.add(matrix[m - r - 1][p]);
            }
            for(int q = m - r - 2; q >= r+1; q--)
            {
                spiral.add(matrix[q][r]);
            }
        }
        return spiral;
    }
    
    private static int getRound(int num)
    {
        return num % 2 == 0 ? (num / 2) : (num / 2 + 1);
    }
}
