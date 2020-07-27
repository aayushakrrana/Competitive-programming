/*  Sample case passing----------TLE in hidden cases

Doof on Cartesian Problem Code: CLPNT
Add problem to Todo list
Submit

You may have helped Chef and prevented Doof from destroying the even numbers. But, it has only angered Dr Doof even further. However, for his next plan, he needs some time. Therefore, Doof has built N walls to prevent Chef from interrupting him. You have to help Chef by telling him the number of walls he needs to destroy in order to reach Dr Doof.

Formally, the whole area can be represented as the first quadrant with the origin at the bottom-left corner. Dr. Doof is located at the origin (0,0). There are N walls, the i-th wall is a straight line segment joining the points (ai,0) and (0,ai). For every initial position of Chef (xj,yj), find the number of walls he needs to break before reaching Doof. Obviously, chef can't start from a point on the wall. Therefore, if (xj,yj) lies on any of the given walls, print −1 in a new line.

Input
First line contains T, denoting the number of testcases.
The first line of every test case contains a single integer N denoting the number of walls Dr Doof has built.
The next line contains N space separated distinct integers each denoting ai.
The next line contains a single integer Q denoting the number of times Chef asks for your help.
The next Q lines contains two space separated integers xj and yj, each denoting the co-ordinates of the starting point of Chef.
Output
For each query, print the number of walls Chef needs to break in order to reach Dr Doof in a separate line. If Chef tries to start from a point on any of the walls, print −1.

Constraints
1≤T≤2∗102
1≤N,Q≤2∗105
1≤ai≤109
0≤xj,yj≤109
a1<a2<a3<....<aN
Sum of N and Q over all testcases for a particular test file does not exceed 2∗105
Sample Input
1
2
1 3
5
0 0
2 0
0 4
1 1
1 2
Sample Output
0
1
2
1
-1
Explanation
The sample input can be represented by the graph given below:

test case 1

If Chef starts from (0,0), he can reach Dr Doof without destroying any wall.
If Chef starts from (2,0), he has to destroy the 1st wall.
If Chef starts from (0,4), he has to destroy both the walls.
If Chef starts from (1,1), he has to destroy the 1st wall.
As (1,2) lies on the second wall, the answer is −1 for the last query.

*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;

	cin>>test;
	while(test!=0)
	{
	    int wall;
	    cin>>wall;
	    vector<long int> point(wall);
	    for(int i=0;i<wall;i++)
	    {
	        cin>>point[i];
	    }
	    sort(point.begin(),point.end(),greater<int>());
	    int help;
	    cin>>help;
	    while(help!=0)
	    {   long br=0;
	        long int x,y;
	        cin>>x>>y;
	        long int z=x+y;
	        for(int i=0;i<wall;i++)
	        {
	            if(z==point[i])
	            {
	                br=-1;
	                break;
	            }
	            if(z>point[i])
	            {
	                br=wall-i;
	                break;
	            }

	        }
	        cout<<br<<"\n";
	        help--;
	    }



		test--;
	}
}
