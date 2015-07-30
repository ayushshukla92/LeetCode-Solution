#include <iostream>
#include <vector>
using namespace std;
bool isSolvable(vector<vector<char> >& board, vector<vector<bool> >& row, vector<vector<bool> >& col, vector<vector<bool> >& box,int pos)
{
	int i=pos/9;
	int j=pos%9;
	if(pos==81)
		return;

	if(board[i][j]>='1' || board[i][j]<='9')
		{
			if(isSolvable(board,row,col,pos+1))
				return true;
		}
	for(char k='1';k<='9';k++)
	{
		int number=k-'1';
		board[i][j]=k;
		if(!row[i][number] && !col[j][number] && !box[(i / 3) * 3 + j / 3][number])
		{
		   row[i][number] = true;
 		   col[j][number] = true;
 		   box[(i / 3) * 3 + j / 3][number] = true;
 		   if(isSolvable(board,row,col,box,pos+1))
 		   		return true;
 		   row[i][number] = false;
 		   col[j][number] = false;
 		   box[(i / 3) * 3 + j / 3][number] = false;
		}
		else{
			board[i][j]='.';
		}
		
	}
	return false;
}

void solveSudoku(vector<vector<char> >& board) 
{
	vector<vector<bool> >row(9, vector<bool>(9,false) ); 
    vector<vector<bool> >col(9, vector<bool>(9,false) ); 
	vector<vector<bool> >box(9, vector<bool>(9,false) ); 	
	for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char c = board[i][j];
            if (c == '.')
                continue;
            row[i][number] = true;
            col[j][number] = true;
            box[(i / 3) * 3 + j / 3][number] = true;
        }
    }


 	isSolvable(board,row,col,box,0);
}


int main()
{
	char p='a';
	p++;
	cout<<p;

	return 0;
}