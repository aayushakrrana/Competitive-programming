/*
Chef and Strings Problem Code: CHEFSTR1
Add problem to Todo list
Submit
Tweet

Read problem statements in Mandarin Chinese.
Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to reach the string he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is easy in guitars with only 6 strings; However, Chef is playing a guitar with 106 strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to skip while playing his favourite song.

fig1(6 5 4 3 2 1)

This is how guitar strings are numbered (In ascending order from right to left). Eg. to switch from string 1 to 6, Chef would have to skip 4 strings (2,3,4,5).

Input:
First line will contain T, number of testcases. Then the testcases follow.
The first line of each test case contains N, the number of times Chef has to pluck a string
The second line of each test case contains N space separated integers - S1, S2, …, SN, where Si is the number of the ith string Chef has to pluck.
Output:
For each testcase, output the total number of strings Chef has to skip over while playing his favourite song.

Constraints
1=T=10
2=N=10^5
1=Si=10^6
For each valid i, Si?Si+1
Subtasks
30 points : for each valid i, Si<Si+1
70 points : No additional constraints
Sample Input:
2
6
1 6 11 6 10 11
4
1 3 5 7
Sample Output:
15
3
Explanation:
Test Case 1

Chef skips 4 strings (2,3,4,5) to move from 1 to 6
Chef skips 4 strings (7,8,9,10) to move from 6 to 11
Chef skips 4 strings (10,9,8,7) to move from 11 to 6
Chef skips 3 strings (7,8,9) to move from 6 to 10
Chef skips 0 strings to move from 10 to 11
Therefore, the answer is 4+4+4+3+0=15

Test Case 2

Chef skips 1 string to move from 1 to 3
Chef skips 1 string to move from 3 to 5
Chef skips 1 string to move from 5 to 7
Therefore, the answer is 1+1+1=3

Author:	aryanag_adm
Date Added:	3-07-2020
Time Limit:	1 secs
Source Limit:	50000 Bytes
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

long int skip(vector <long int> &vect,long int n)
{
   long int skip=0;
    for(long int i=0;i<n-1;i++)
    {
        skip=skip+abs(vect[i]-vect[i+1])-1;
    }
	cout<<skip<<endl;
	return 0;
}


int main(){

	long int t;
	cin>>t;
	while(t!=0)
	{
		long int n;
		cin>>n;
		vector<long int> vect(n);
		for(long int i=0;i<n;i++)
		{
			cin>>vect[i];
		}
		skip(vect,n);
		//cout<<"HEllo";
		t--;
	}
	return 0;
}
