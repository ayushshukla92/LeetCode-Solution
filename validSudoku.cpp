#include <iostream>
#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char> >& board)
 {
	bool isValidSudoku(vector<vector<char> >& board)
 {
	vector<vector<bool> >row(9, vector<bool>(9,false) ); 
    vector<vector<bool> >col(9, vector<bool>(9,false) ); 
	vector<vector<bool> >box(9, vector<bool>(9,false) ); 	
for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char c = board[i][j];
            if (c == '.')
                continue;

            if (c < '0' || c > '9')
                return false;

            int number = c - '1';
            if (row[i][number] || col[j][number] || box[(i / 3) * 3 + j / 3][number])
                return false;

            row[i][number] = true;
            col[j][number] = true;
            box[(i / 3) * 3 + j / 3][number] = true;
        }
    }
    return true;
 }
 }


int main()
{
	bool t;
	//cout<<x[2];
	return 0;
}