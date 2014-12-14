#include <iostream>
#include <vector>
#include <string>

using namespace std;

class prefix
{
	private:
		string mergePrefix(string &a, string &b)
		{
			string result = "";
			if(a == "" || b == "")
			{
				return "";
			}

			int i = 0;
			int len = a.length() > b.length() ? b.length() : a.length();
			while(i < len)
			{	
				if(a.at(i) == b.at(i))
				{
					result = result + a.at(i);
					i++;
				}
				else
					break;
			}
			return result;
		}
	public:
		string longestCommonPrefix(vector<string> &strs)
		{
			int n = strs.size();
			if(n == 0)
			{
				return "";
			}

			if(n == 1)
			{
				return strs.at(0);
			}
			
			string prefix = strs.at(0);
			for(int j = 1; j < n; j++)
			{
				prefix = this -> mergePrefix(prefix, strs.at(j));
			}
			return prefix;
		}
};

int main()
{
	prefix * p;
	string s1 = "c";
	string s2 = "c";
	//string s3 = "";
	vector<string> ss;
	ss.push_back(s1);
	ss.push_back(s2);
	//ss.push_back(s3);
	string result = p ->  longestCommonPrefix(ss);
	cout << result << endl;
}
