/*
B. Array Walk
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array a1,a2,…,an, consisting of n positive integers.

Initially you are standing at index 1 and have a score equal to a1. You can perform two kinds of moves:

move right — go from your current index x to x+1 and add ax+1 to your score. This move can only be performed if x<n.
move left — go from your current index x to x−1 and add ax−1 to your score. This move can only be performed if x>1. Also, you can't perform two or more moves to the left in a row.
You want to perform exactly k moves. Also, there should be no more than z moves to the left among them.

What is the maximum score you can achieve?

Input
The first line contains a single integer t (1≤t≤104) — the number of testcases.

The first line of each testcase contains three integers n,k and z (2≤n≤105, 1≤k≤n−1, 0≤z≤min(5,k)) — the number of elements in the array, the total number of moves you should perform and the maximum number of moves to the left you can perform.

The second line of each testcase contains n integers a1,a2,…,an (1≤ai≤104) — the given array.

The sum of n over all testcases does not exceed 3⋅105.

Output
Print t integers — for each testcase output the maximum score you can achieve if you make exactly k moves in total, no more than z of them are to the left and there are no two or more moves to the left in a row.

Example
inputCopy
4
5 4 0
1 5 4 3 2
5 4 1
1 5 4 3 2
5 4 4
10 20 30 40 50
10 7 3
4 6 8 2 9 9 7 4 10 9
outputCopy
15
19
150
56
Note
In the first testcase you are not allowed to move left at all. So you make four moves to the right and obtain the score a1+a2+a3+a4+a5.

In the second example you can move one time to the left. So we can follow these moves: right, right, left, right. The score will be a1+a2+a3+a2+a3.

In the third example you can move four times to the left but it's not optimal anyway, you can just move four times to the right and obtain the score a1+a2+a3+a4+a5.


*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);
int test;
cin>>test;
while(test!=0)
{
    int n,k,z;
    cin>>n>>k>>z;
    char st = 'r';
    vector<int> vect(n);
    for(int i=0;i<n;i++)
    {
    cin>>vect[i];
    }
    int sum=vect[0];
    /*if(z==0)
    {
        for(int i=1;i<k;i++)
        {
            sum += vect[i];
        }
    }
    else
    {*/   int i=1;
        while(k>0)
        {
            if(st=='l')
            {
               sum += vect[i];
               i++;
               st='r';
            }
            else if(st=='r' && z!=0)
            {
                        if(vect[i-1]>vect[i+1])
                        {
                            sum += vect[i-1];
                            z--;
                            i--;
                            st='l';
                        }
                        else
                        {
                            sum += vect[i];
                            i++;
                            st='r';
                        }
            }
            else if (st=='r' && z==0)
            {
                sum += vect[i];
                i++;
                st='r';
            }
            else ;
            //cout<<sum<<" ";

            k--;
        }
    //}

    cout<<sum<<endl;




test--;
}
return 0;
}
