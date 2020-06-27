 /*
 Fedya and Maths
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Fedya studies in a gymnasium. Fedya's maths hometask is to calculate the following expression:

(1n?+?2n?+?3n?+?4n) mod 5
for given value of n. Fedya managed to complete the task. Can you? Note that given number n can be extremely large (e.g. it can exceed any integer type of your programming language).

Input
The single line contains a single integer n (0?=?n?=?10105). The number doesn't contain any leading zeroes.

Output
Print the value of the expression without leading zeros.

Examples
inputCopy
4
outputCopy
4
inputCopy
124356983594583453458888889
outputCopy
0
Note
Operation x mod y means taking remainder after division x by y.

Note to the first sample:
*/
/*
#include <boost/multiprecision/cpp_int.hpp> 	
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
	unsigned long long int n;
	cin>>n;
	unsigned long long int s=(pow(1,n)+pow(2,n)+pow(3,n)+pow(4,n));
	cout<<s%5;
	return 0;
}
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cmath>
#include <cstring>
#include <string>
#include <cassert>
#include <iomanip>
#include <ios>


// 456B -
// Method:

namespace {
    using namespace std;
    using ll = long long;
    using ii = std::pair<int, int>;
    using vi = std::vector<int>;
    using vii = std::vector<ii>;
    using vll = std::vector<ll>;
    
    const int INF = 1e9;
//    const int MAX_COUNT = 1e5;
    const int MOD = 1e9 + 7;
    
    template<typename T> inline T gcd(T a, T b) { return b ? gcd(b, a%b) : a; }
    template<typename T, typename U> inline std::pair<T, U> mpair(T a, U b) { return std::make_pair(a, b); }
    
//#define ACTIVE
    
#ifdef ONLINE_JUDGE
#   define RUN_PROBLEM int main(int argc, const char * argv[])
#elif defined(ACTIVE)
#   define RUN_PROBLEM int run(int argc, const char * argv[])
#else
#   define RUN_PROBLEM static int run(int argc, const char * argv[])
#endif
    
#define REP(k,a) for(int k=0; k < (a); ++k)
#define ALL(a) begin(a), end(a)
#define FOR(i,a,b) for(int i=a; i < (b); ++i)
#define D(a) cout << #a ": " << a << endl;
    
}

RUN_PROBLEM
{
    std::ios_base::sync_with_stdio(false);
    
    int len = 0;
    char c;
    int last = 0, preLast = 0;
    
    while (cin >> c) {
        int dig = c - '0';
        ++len;
        
        preLast = last;
        last = dig;
    }
    
    if (len == 1 && last == 0) {
        cout << "4" << endl;
        return 0;
    }
        
    bool isOdd = last % 2 == 1;
    bool is4Div = (preLast * 10 + last) % 4 == 0;
   
    int tmp = 1;
        
    if (isOdd) {
        tmp += 5;
        tmp += 4;
    } else {
        if (is4Div) {
            tmp += 6;
            tmp += 1;
        } else {
            tmp += 4;
            tmp += 9;
        }
        
        tmp += 6;
    }
    
    int ans = tmp % 5;
    cout << ans << endl;
    return 0;
}

