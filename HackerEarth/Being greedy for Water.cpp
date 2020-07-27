/*
Being greedy for Water
You are given container full of water. Container can have limited amount of water. You also have N bottles to fill. You need to find the maximum numbers of bottles you can fill.

Input:
First line contains one integer, T, number of test cases.
First line of each test case contains two integer, N and X, number of bottles and capacity of the container.
Second line of each test case contains N space separated integers, capacities of bottles.

Output:
For each test case print the maximum number of bottles you can fill.

Constraints:
1<=T<=100
1<=N<=10^4
1<=X<=10^9
1<=capacity of bottle<=10^6



SAMPLE INPUT
1
5 10
8 5 4 3 2
SAMPLE OUTPUT
3
*/
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long int n,x;
cin>>n>>x;
int a[n],i;
for(i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
long long int sum=0;
i=0;
long long int count=0;
while(sum<=x-a[i]&&i<n){
sum+=a[i];
count++;
i++;
}
cout<<count<<endl;
}
/*return 0;/**/
}

/*#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int test;

	cin>>test;
	while(test!=0)
	{
        long long m_bottl=0;
		int n_bottle;
        long long capacity;
		cin>>n_bottle>>capacity;
		vector<long int>bottle(n_bottle);
		for(int i=0;i<n_bottle;i++)
		{
			cin>>bottle[i];
		}
		sort(bottle.begin(),bottle.end());
		int i=0;
		while(1)
		{   if(m_bottl>capacity)
            {break;}
			m_bottl +=bottle[i];
			i++;
		}
		cout<<i-1<<endl;
		test--;
	}
}
*/
