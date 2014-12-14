#include <iostream>
using namespace std;

class removedup
{
	public:
		int rdup(int A[], int n)
		{
			if(n == 0)
			{
				return 0;
			}

			int count = 0;
			for(int i = 0; i < n; i++)
			{
				if(A[count] == A[i])
				{
					continue;
				}
				A[++count] = A[i];
			}

			return ++count;
		}
};

int main()
{
 	int A[] = {1, 1, 2, 2, 3, 3};
	removedup* r;
	int c = r -> rdup(A, 6);
	cout << "the num is " << c << " and the array is ";
	for(int i = 0; i < 6; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
