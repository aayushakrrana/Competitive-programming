/*

Help the Teacher Problem Code: HELPTECH
Add problem to Todo list
Submit

Mr. Das is a teacher teaching for several years in a school. He is not computer savvy. Due to lockdown, now he has to take classes online. Recently he took an online exam for students of different classes. Now, he will call parents of all the students who scored lower than average marks for the class. He has requested you to give the name X, parent's phone number P, and marks obtained M to him.

Input:
First line contains T no. of test cases
for every test case, first line contains an integer N, no. of students of his class
Next N lines contain X, P , and M separated by space
Output:
For every test case, find details of the students who scored below average, then print X,P,M separated by space on a new line as per the increasing order of their marks. In case there are multiple students with the same marks, print them as per the order of their occurrence in the input

Constraints
1≤T≤20
X contains characters between a-z and A-Z with a maximum length of 20
1≤N≤100
P is 10 digits
0≤M≤100
Sample Input:
2
3
Rahul 1345964789 47
Rupendra 1457856987 58
Priya 1478569820 45
2
Tanuja 4310779415 97
Akash 3689781245 43
Sample Output:
Priya 1478569820 45
Rahul 1345964789 47
Akash 3689781245 43
EXPLANATION:
In #1, Priya and Rahul's number was lower than average. In #2, Akash's number was lower than average
*/

#include<bits/stdc++.h>
#include<vector>
#include<sstream>
using namespace std;

int swap(int *i,int *j,string *s1,string *s2,string *s6,string *s7)
{
	int temp=*i;
	*i=*j;
	*j=temp;

	string temp2=*s1;
	*s1=*s2;
	*s2=temp2;

	string temp3=*s6;
	*s6=*s7;
	*s7=temp3;
}

int sortt(vector<string> &name,vector<string>&phone,vector<int>&marks,int n)
{
    for(int i=0;i<n-1;i++)
	{


		for(int j=0;j<n-i-1;j++)
		{
			if(marks[j]>marks[j+1])
			swap(&marks[j],&marks[j+1],&name[j],&name[j+1],&phone[j],&phone[j+1]);
		}
	}

}




int main()
{
int test;
cin>>test;
while(test!=0)
{   int n;
    cin>>n;
    vector<string> name(n);
    vector<string> phone(n);
    vector<int> marks(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
    cin>>name[i];
    cin>>phone[i];
    cin>>marks[i];
    sum += marks[i];
    }
    sum=sum/n;
    sortt(name,phone,marks,n);

    for(int i=0;i<n;i++)
    {
        if(marks[i]<sum)
        {
        cout<<name[i]<<" "<<phone[i]<<" "<<marks[i]<<endl;
        }
    }

    test--;
}
return 0;
}
