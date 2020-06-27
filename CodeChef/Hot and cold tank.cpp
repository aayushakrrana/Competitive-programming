/*
HOT AND COLD    HOTNCOLD


This is a peculiar functioning setup.

Two Tanks are separated from each other by a wall .There is a pipe in the wall which connects both tanks which allows flow of water between them . Due to this ,there is change in temperature of both tanks , every minute temperature of Tank with larger temperature among two decreases by one and temperature of Tank with smaller temperature among two increases by two until equilibrium is reached , But there is a problem .

The pipe can't control this flow of water if there is Non-equilibrium (inequality of temperature on both sides ) even after m minutes and the pipe will burst after it , your task is to predict whether the pipe will burst or not .

Note: If equilibrium cannot be reached the process will continue forever.

The initial temperature of Cold Tank is Tc , of Hot Tank it is Th.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers m,Tc,Th.
Output:
For each testcase, output in a single line answer "Yes" if Pipe will burst after m minutes "No" if pipe will not burst.

Constraints
1=T=100000
1=m,Tc,Th=10^9
Tc=Th
Sample Input:
  2
  4 5 10
  2 2 5
Sample Output:
   Yes
   No
   */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ch=0;
    cin>>t;
    while(t!=0)
    {
        long int m,tc,th;
        cin>>m>>tc>>th;
        while(m!=0)
        {   if(tc==th)
            {
             cout<<"No"<<endl;
             ch=1;
             m=1;
             
            }
            else if(tc<th)
            {
                th--;
                tc+=2;
            }
            else{
                tc--;
                th+=2;
            }
            m--;
        }
        if(ch==0)
        cout<<"Yes"<<endl;
        t--;
    }
    return 0;
}
