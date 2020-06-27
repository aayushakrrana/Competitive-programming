/*

RationalLee


time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Lee just became Master in Codeforces, and so, he went out to buy some gifts for his friends. He bought n integers, now it's time to distribute them between his friends rationally...

Lee has n integers a1,a2,�,an in his backpack and he has k friends. Lee would like to distribute all integers in his backpack between his friends, such that the i-th friend will get exactly wi integers and each integer will be handed over to exactly one friend.

Let's define the happiness of a friend as the sum of the maximum and the minimum integer he'll get.

Lee would like to make his friends as happy as possible, in other words, he'd like to maximize the sum of friends' happiness. Now he asks you to calculate the maximum sum of friends' happiness.

Input
The first line contains one integer t (1=t=104) � the number of test cases.

Next 3t lines contain test cases � one per three lines.

The first line of each test case contains two integers n and k (1=n=2�105; 1=k=n) � the number of integers Lee has and the number of Lee's friends.

The second line of each test case contains n integers a1,a2,�,an (-109=ai=109) � the integers Lee has.

The third line contains k integers w1,w2,�,wk (1=wi=n; w1+w2+�+wk=n) � the number of integers Lee wants to give to each friend.

It's guaranteed that the sum of n over test cases is less than or equal to 2�105.

Output
For each test case, print a single integer � the maximum sum of happiness Lee can achieve.

Example
inputCopy
3
4 2
1 13 7 17
1 3
6 2
10 10 10 10 11 11
3 3
4 4
1000000000 1000000000 1000000000 1000000000
1 1 1 1
outputCopy
48
42
8000000000
Note
In the first test case, Lee should give the greatest integer to the first friend (his happiness will be 17+17) and remaining integers to the second friend (his happiness will be 13+1).

In the second test case, Lee should give {10,10,11} to the first friend and to the second friend, so the total happiness will be equal to (11+10)+(11+10)
In the third test case, Lee has four friends and four integers, it doesn't matter how he distributes the integers between his friends.



*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

  int main(){
	int t=3,n=4,happ,k=2,z=0;
	vector<int>inte(n);
	vector<int>intedi(k);
	
	for(int i=0;i<n;i++)
	{
		cin>>inte[i];
	}
	for(int i=0;i<k;i++)
	{
		cin>>intedi[i];
	}
	sort(inte.begin(),inte.end(),greater<int>());
	for(int i=0;i<k;i++)
	{
		happ=0;
		int j=intedi[i];
		//for(int j=0;j<intedi[i];j++)
		//{
		happ+=inte[z]+inte[z+j-1];			
		cout<<happ<<" ";
		//}
		z=z+j;
	
	}
	
	cout<<endl<<happ;
	
	return 0;
}
