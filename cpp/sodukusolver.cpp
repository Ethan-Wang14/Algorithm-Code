#include <iostream>
#include <vector>

using namespace std;

class sudokusolver
{
	private:
		struct Position
		{
			int row;
			int col;
		};

	public:
		//This function used to check if the position is valid
		bool isValid(vector<vector<char> &board, Position &p)
		{
			//first check its row and col are legal
			char val = board[p.row][p.col];
			if(val < '1' || val > '9')
			{
				return false;
			}

			//Then check the rows
			vector<char> &brow = board[p.row];
			int width = brow.size();
			for(int ic = 0; ic < width; ic++)
			{
				if(ic != p.col &&)
			}
		}

}
