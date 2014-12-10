#include <iostream>

using namespace std;

class test
{
	public:
		doTest
		{
			cout << "You are awesome!" << endl;
		}
		
		~test()
		{
		}
};

int main()
{
	test t = new test();
	t.doTest();
	return 0;
}
