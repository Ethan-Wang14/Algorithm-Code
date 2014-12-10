#include <iostream>
using namespace std;

class strStr
{
	public:
		void getNext(const char* p, int lp, vector<int>& next)
		{
			next[0] = -1;
			int i = 0;
			while(i < lp - 1)
			{
				int idx = i > 0 ? next[i] : -1;
				if(-1 == idx)
				{
					next[++i] = ++idx;
				}
				else if (p[i] == p[idx])
				{
					next[++i] = ++idx;
				}
				else
				{
					while(idx >= 0 && p[i] != p[idx])
					{
						idx = next[idx];
					}
					next[++i] = ++idx;
				}
			}
		}
	
		int match(char * s, char *p, int ls, int lp)
		{
			vector<int> next(lp);
			int i = 0;
			int j = 0;
			getNext(p, lp, next);
			while(i < strlen(s))
			{
				if(-1 == j || s[i] == p[j])
				{
					++i;
					++j;
				}
				else
					j = next[j];
				if(j == lp)
					return i - lp;
			}
			return -1;
		}

		int strstr(char *h, char *n)
		{
			int l_need = strlen(n);
			if(0 == l_need) 
				return 0;
			int l_hay = strlen(h);
			if(l_hay == 0)
				return -1;

			int idx = match(h, n, l_hay, l_need);
			if(idx >= 0)
			{
				return idx;
			}

			return -1;
		}
}
