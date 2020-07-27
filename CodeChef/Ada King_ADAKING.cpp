/*

Ada King Problem Code: ADAKING

Chef Ada is training her calculation skills. She wants to place a king and some obstacles on a
chessboard in such a way that the number of distinct cells the king can reach is exactly K.

Recall that a chessboard has 8 rows (numbered 1 through 8) and 8 columns (numbered 1 through 8);
let's denote a cell in row r and column c by (r,c).

In one move, a king can move to any adjacent cell which shares a side or corner with its current cell
and does not contain an obstacle. More formally, a king in a cell (r,c) can move to any cell (rn,cn) if (rn,cn)
is a valid cell of the chessboard which does not contain an obstacle and (r−rn)2+(c−cn)2≤2.

A cell (x,y) can be reached by a king if, after an arbitrary number of moves (including zero),
the king is in the cell (x,y).

Help Ada find any valid configuration of the board such that the king can reach exactly K distinct cells.
It is guaranteed that such a configuration always exists. If there are multiple solutions, you may find any one.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer K.
Output
For each test case, print 8 lines describing a chessboard, each containing 8 characters. For each valid i and j, the j-th character on the i-th line should be one of the following:

'O' if the cell (i,j) initially contains the king; there should be exactly one such cell
'X' if the cell (i,j) contains an obstacle
'.' if the cell (i,j) is empty
Constraints
1≤T≤64
1≤K≤64
Subtasks
Subtask #1 (10 points): K≤8
Subtask #2 (90 points): original constraints

Example Input
4
1
5
9
64
Example Output
........
........
........
.XXX....
.XOX....
.XXX....
........
........

........
........
........
........
........
XXX.....
..XX....
O..X....

........
.XXXXXXX
.X.O...X
.X...XXX
.XXX.X..
...XXX..
........
........

........
........
........
...O....
........
........
........
........
Explanation
The descriptions of the chessboard for each test case are separated by blank lines for clarity. Note that these lines
should not appear on the output of your submission.

Example case 1: The king is surrounded by obstacles, so it cannot move ― the only cell it can reach is its initial cell.

Example case 4: The king can visit all cells of the board.

Author:	7★alei
Date Added:	16-10-2018
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	ADA, ASM, BASH, BF, C, CAML, CLOJ, CLPS, COB, CPP14, CPP17, CS2, D, ERL, FORT, FS, GO,
 HASK, ICK, ICON, JAVA, JS, kotlin, LISP clisp, LISP sbcl, LUA, NEM, NICE, NODEJS, PAS fpc, PAS gpc, PERL,
  PERL6, PHP, PIKE, PRLG, PYP3, PYPY, PYTH, PYTH 3.6, R, RUBY, rust, SCALA, SCM chicken, SCM guile, SCM qobi,
SQL, SQLQ, ST, swift, TCL, TEXT, WSPC
*/

#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
vector< vector <char> > chess(9, vector<char>(9,'.'));
int t;
cin>>t;
while(t!=0)
{
int k;
cin>>k;
chess[0][0]='O';
for(int i=0;i<8;i++)
{
    for(int j=0;j<=8;j++)
    {   k--;
        if(k==0)
        {
            chess[i][j+1]='X';
            for(int z=0;z<=j+1;z++)
            {
                chess[i+1][z]='X';

            }
            break;
        }

        if(k==0)
        {
            break;
        }

    }
}
for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
{
cout<<chess[i][j]<<" ";
}
cout<<endl;
}

t--;
}
return 0;
}
