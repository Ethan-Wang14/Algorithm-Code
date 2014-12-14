#include <iostream>
#include <stack>
#include <string>

using namespace std;

class parentheses
{
	public:
		bool isValid(string s)
		{
			int n = s.length();
			if(n == 0)
			{
				return true;
			}
			cout << "1!" << endl;
			if(n % 2 == 1)
			{
				return false;
			}

			stack<char> chars;
			for(int i = 0; i < n; i++)
			{
				if(s.at(i) == '[' || s.at(i) == '(' || s.at(i) == '{')
				{
					chars.push(s.at(i));
				}
				cout << "3!" << endl;
				if(s.at(i) == ']')
				{
					if(chars.empty() || chars.top() != '[')
					{
						chars.push(s.at(i));
					}
					else
					{
						chars.pop();
					}
				}

				if(s.at(i) == ')')
				{
					if(chars.empty() || chars.top() != '(')
					{
						chars.push(s.at(i));
					}
					else
					{
						chars.pop();
					}
				}

				if(s.at(i) == '}')
				{
					if(chars.empty() || chars.top() != '[')
					{
						chars.push(s.at(i));
					}
					else
					{
						chars.pop();
					}
				}
			}
			return chars.empty();
		}
};

int main()
{
	string s(")}{({))[{{[}");
	parentheses * p;
	cout << "this string is parentheses " << p -> isValid(s) << endl;
	return 0;
}
