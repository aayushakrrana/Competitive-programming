/*

Even-tual Reduction Problem Code: EVENTUAL
Add problem to Todo list
Submit

Read problems statements in Hindi, Mandarin Chinese, Russian, Vietnamese, and Bengali as well.
You are given a string S with length N. You may perform the following operation any number of times: choose a non-empty substring of S (possibly the whole string S) such that each character occurs an even number of times in this substring and erase this substring from S. (The parts of S before and after the erased substring are concatenated and the next operation is performed on this shorter string.)

For example, from the string "acabbad", we can erase the highlighted substring "abba", since each character occurs an even number of times in this substring. After this operation, the remaining string is "acd".

Is it possible to erase the whole string using one or more operations?

Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S with length N.
Output
For each test case, print a single line containing the string "YES" if it is possible to erase the whole string or "NO" otherwise (without quotes).

Constraints
1≤T≤200
1≤N≤1,000
S contains only lowercase English letters
Example Input
4
6
cabbac
7
acabbad
18
fbedfcbdaebaaceeba
21
yourcrushlovesyouback
Example Output
YES
NO
YES
NO
Explanation
Example case 1: We can perform two operations: erase the substring "abba", which leaves us with the string "cc", and then erase "cc".
*/


#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int test_cases;
    cin>>test_cases;
    for(;test_cases>0;test_cases--)
    {
        int str_size;
        cin>>str_size;
        vector<char> vect(str_size);
        for(int i=0;i<str_size;i++)
        {

        }
    }

    return 0;
}
