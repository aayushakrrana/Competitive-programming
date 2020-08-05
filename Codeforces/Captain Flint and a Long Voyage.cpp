/*
B. Captain Flint and a Long Voyage
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Captain Flint and his crew keep heading to a savage shore of Byteland for several months already, drinking rum and
telling stories. In such moments uncle Bogdan often remembers his nephew Denis. Today, he has told a story about how
Denis helped him to come up with an interesting problem and asked the crew to solve it.

In the beginning, uncle Bogdan wrote on a board a positive integer x consisting of n digits. After that,
he wiped out x and wrote integer k instead, which was the concatenation of binary representations of digits
 x consists of (without leading zeroes). For example, let x=729, then k=111101001 (since 7=111, 2=10, 9=1001).

After some time, uncle Bogdan understood that he doesn't know what to do with k and asked Denis to help.
 Denis decided to wipe last n digits of k and named the new number as r.

As a result, Denis proposed to find such integer x of length n that r (as number) is maximum possible.
If there are multiple valid x then Denis is interested in the minimum one.

All crew members, including captain Flint himself, easily solved the task. All, except cabin boy Kostya,
 who was too drunk to think straight. But what about you?

Note: in this task, we compare integers (x or k) as numbers (despite what representations they are written in),
 so 729<1999 or 111<1000.

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

Next t lines contain test cases — one per test case. The one and only line of each test case contains the single integer n (1≤n≤105) — the length of the integer x you need to find.

It's guaranteed that the sum of n from all test cases doesn't exceed 2.10^5.

Output
For each test case, print the minimum integer x of length n such that obtained by Denis number r is maximum possible.

Example
inputCopy
2
1
3
outputCopy
8
998
Note
In the second test case (with n=3), if uncle Bogdan had x=998 then k=100110011000. Denis (by wiping last n=3 digits) will obtain r=100110011.

It can be proved that the 100110011 is the maximum possible r Denis can obtain and 998 is the minimum x to obtain it.


*/
#include<bits/stdc++.h>
#include<vector>
#include <sstream>
#include<bitset>
using namespace std;

string createbin(int n)
{


    string s = bitset<64> (n).to_string();

    const auto loc1 = s.find('1');

    if(loc1 != string::npos)
        return s.substr(loc1);

    return "0";

}
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    unsigned long long int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
int isgreater(string old,string newb)
{
    unsigned long long int number1 = binaryToDecimal(old);
    unsigned long long int number2 = binaryToDecimal(newb);
     cout<<number1<<" "<<number2<<endl;;
     if(number1<=number2) return 1;
     else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    freopen("output.txt","w",stdout);
    int test;
    cin>>test;
    while(test!=0)
    { int n;
    cin>>n;
    vector<unsigned long long int> x(n,9);
    /*for(int i=0;i<n;i++ )
    {
        x =(x*10)+9;
    }*/
    //cout<<x<<endl;
    string bin;
    //vector<long int> val(x);

    //for(int i=0;i<n;i++)
        //val =x;

        //long long int base=pow(10,n);
        for(int i=0;i<n;i++)
        {
           // base /=10;
         //val = val/base;

         bin += createbin(x[i]);
         //val = x%base;
        }
        cout<<bin<<endl;

        unsigned long long int bin_len= bin.length();
        unsigned long long int new_bin_len= bin_len-n;
         bin.erase(new_bin_len);

         string old_bin=bin;
          cout<<old_bin<<"  <-->  "<<bin<<endl;
         while(isgreater(old_bin,bin))
         {bin="\0";


        for(int i=n-1;i>=0;i--)
        {
            if(x[i]!=0)
                {
                    x[i]--;
                    break;
                }
            else if(x[i]==0)
            {
                x[i]=9;
                x[i-1]--;

                break;
            }

        }

       // int base=pow(10,n);
        for(unsigned long long int i=0;i<n;i++)
        {
            //base /=10;
         //val = val/base;

         bin += createbin(x[i]);
         //val = x%base;
        }
        cout<<bin<<endl;

         unsigned long long int bin_len= bin.length();
         unsigned long long int new_bin_len= bin_len-n;
         bin.erase(new_bin_len);
         cout<<bin<<endl;
         string old_bin=bin;
         cout<<old_bin<<"  <-->  "<<bin<<endl;

         }
         x[x.size()-1] +=1;
    for (auto const& i: x) {
		std::cout << i;
	}cout<<endl;

        test--;
    }
}
