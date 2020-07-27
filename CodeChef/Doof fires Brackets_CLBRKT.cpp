/*Doof fires Brackets Problem Code: CLBRKT                                     //list(map(int, input().rstrip().split()))
Add problem to Todo list
Submit

You may have tried your level best to help Chef but Dr Doof has managed to come up with his masterplan in the meantime. Sadly, you have to help Chef once again. Dr Doof has designed a parenthesis-inator. It throws a stream of N brackets at the target, 1 bracket per second. The brackets can either be opening or closing. Chef appears in front of the stream at time t. If Chef faces an opening bracket, he gets hit. However, if he faces a closing bracket, he may choose to let it pass through him (Chef is immune to closing brackets). Chef gets a chance to counter attack Doof as soon as he finds a balanced non-empty bracket sequence. Help Chef by providing him the minimum time x at which he will be able to launch his counter attack. If Chef is unable to counter attack, answer −1.

Formally, you are given a string S of length N consisting only of opening brackets ( and closing brackets ). The substring of S starting at index L and ending at index R, i.e. SLSL+1…SR is denoted by S[L,R] . Consider Q cases. In the ith case, Chef appears at time ti (1≤ti≤N) and faces all characters from index ti to N. Find the minimum index x (ti≤x≤N) such that the substring S[ti,x] contains a non-empty balanced bracket subsequence containing the same number of opening brackets as S[ti,x] (i.e., you cannot remove any opening bracket from the substring). If such an x does not exist, print −1.

A string X is called a subsequence of a string Y if it is possible to obtain X by erasing some (possibly zero) characters from Y without changing the order of the remaining characters.

A balanced bracket sequence is defined as:

an empty string is a balanced bracket sequence.
if s is a balanced bracket sequence, then so is (s).
if s and t are balanced bracket sequences, then so is st.
Note:− The input files are large. The use of Fast I/O is recommended.

Input
The first line contains a single integer T denoting the number of testcases.
The first line of each test case contains the string S.
The next line contains a single integer Q denoting the number of cases to consider.
The next line contains Q space separated integers, each denoting ti.
Output
For each query, print the minimum value of x in a separate line. If no such x exists, print −1.

Constraints
1≤T≤103
1≤|S|≤107
1≤Q≤106
1≤ti≤N
Every character of S is either ( or ).
Sum of |S| and Q over all testcases for a particular test file does not exceed 107 and 106 respectively.
Sample Input
1
)())((()
3
1 7 6
Sample Output
3
8
-1
Explanation
For the first query, Chef chooses to let S1 pass through him, gets hit by S2 and finally completes a balanced bracket sequence by adding S3 to S2 at time x = 3.

*/
