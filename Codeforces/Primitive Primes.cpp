/*
Primitive Primes
time limit per test1.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
It is Professor R's last class of his teaching career. Every time Professor R taught a class, he gave a special problem for the students to solve. You being his favourite student, put your heart into solving it one last time.

You are given two polynomials f(x)=a0+a1x+?+an-1xn-1 and g(x)=b0+b1x+?+bm-1xm-1, with positive integral coefficients. It is guaranteed that the cumulative GCD of the coefficients is equal to 1 for both the given polynomials. In other words, gcd(a0,a1,…,an-1)=gcd(b0,b1,…,bm-1)=1. Let h(x)=f(x)·g(x). Suppose that h(x)=c0+c1x+?+cn+m-2xn+m-2.

You are also given a prime number p. Professor R challenges you to find any t such that ct isn't divisible by p. He guarantees you that under these conditions such t always exists. If there are several such t, output any of them.

As the input is quite large, please use fast input reading methods.

Input
The first line of the input contains three integers, n, m and p (1=n,m=106,2=p=109),  — n and m are the number of terms in f(x) and g(x) respectively (one more than the degrees of the respective polynomials) and p is the given prime number.

It is guaranteed that p is prime.

The second line contains n integers a0,a1,…,an-1 (1=ai=109) — ai is the coefficient of xi in f(x).

The third line contains m integers b0,b1,…,bm-1 (1=bi=109)  — bi is the coefficient of xi in g(x).

Output
Print a single integer t (0=t=n+m-2)  — the appropriate power of x in h(x) whose coefficient isn't divisible by the given prime p. If there are multiple powers of x that satisfy the condition, print any.

Examples
inputCopy
3 2 2
1 1 2
2 1
outputCopy
1
inputCopy
2 2 999999937
2 1
3 1
outputCopy
2
Note
In the first test case, f(x) is 2x2+x+1 and g(x) is x+2, their product h(x) being 2x3+5x2+3x+2, so the answer can be 1 or 2 as both 3 and 5 aren't divisible by 2.

In the second test case, f(x) is x+2 and g(x) is x+3, their product h(x) being x2+5x+6, so the answer can be any of the powers as no coefficient is divisible by the given prime.
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,p;
	cin>>n;
	cin>>m;
	cin>>p;
	long long int fx[n],gx[m];
	long long int o=(n-1)+(m-1);
	//cout<<o;
	long long int hx[o]={0};
	for(int i=0;i<n;i++)
	{
		cin>>fx[i];	
	}
	for(int i=0;i<m;i++)
	{
		cin>>gx[i];
	}
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        hx[i+j]+=fx[i]*gx[j];
	        //cout<<i<<j<<" "<<hx[i+j]<<endl;
	    }
	}
	for(int i=0;i<=o;i++)
	{
	    if(hx[i]%p!=0){
		cout<<i;
		return 0;
	}
	    
	}
	
	*/
	
	
/*	for(int i=0;i<n;i++)
	{
		cout<<fx[i]<<" ";
	}
	for(int i=0;i<m;i++)
	{
		cout<<gx[i]<<" ";
	}
	for(int i=0;i<=o;i++)
	{
		cout<<hx[i]<<" ";
	}*/
	#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 1000010

int n, m, p, a[MAX], b[MAX];

int solve() {
	int i = n - 1, j = m - 1;
	while (i + j > 0) {
		if (j > 0 && b[j] % p == 0)
			j--;
		else if (i > 0 && a[i] % p == 0)
			i--;
		else
			return i + j;
	}
	return 0;
}

int main() {
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int j = 0; j < m; j++)
		scanf("%d", &b[j]);
	cout << solve() << endl;
	return 0;
}
	

