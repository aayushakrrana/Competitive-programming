/*Equal Number Problem Code: EQUALNUM
Add problem to Todo list
Submit

In international standards, when writing a number, a comma is placed after every three digits starting from the right. For example, 1000000 is written as 1,000,000.
Whereas in India and few other countries, a comma is placed after the first three digits from the right, after that a comma is placed after every two digits. For example, 1000000 is written as 10,00,000.
Given two numbers, one in international format (W) and another in Indian format (I), print if they are equal or not.

Input:
First line contains T no. of test cases
For every test case, a line W and I separated by space
Output:
For every test case, print equal or different on a new line.

Constraints
1≤T≤1000
1≤len(W),len(I)≤50
Sample Input:
2
1,359,479 13,59,479
4,750 43,140
Sample Output:
equal
different
EXPLANATION:
Self-explanatory.

*/#include<bits/stdc++.h>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
int test;
cin>>test;
while(test!=0)
{
    string s1,s2;
    cin>>s1>>s2;


        vector<char>vect1(s1.length());
        vector<char>vect2(s2.length());
       for(int i=0;i<s1.length();i++)
       {
           vect1[i]=s1[i];
       }
       for(int i=0;i<s2.length();i++)
       {
           vect2[i]=s2[i];
       }
        int l1=vect1.size();
        int l2=vect2.size();
        string num1,num2;
       for(int i=0;i<l1;i++)
       {
           if(vect1[i]!=',')
           {
              num1 +=vect1[i];
           }

       }
       for(int i=0;i<l2;i++)
       {

           if(vect2[i]!=',')
           {
              num2 +=vect2[i];
           }
       }




    if (num1==num2)
        printf("equal\n");
    else
        printf("different\n");




    test--;
}
return 0;
}


