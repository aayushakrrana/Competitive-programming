#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{
int n;
cin>>n;
int sum=0;
while(n!=0)
{
sum +=n%10;
n=n/10;

}
cout<<sum<<endl;
}
return 0;
}
/*
-----------------------------------------------------------------------------------------------
Sum of Digits Problem Code: FLOW006
Add problem to Todo list
Submit

You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3
12345
31203
2123
Output
15
9
8*/
