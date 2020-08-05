/*
Berhampore or Serampore Problem Code: BHPORSRP
Add problem to Todo list
Submit

The name of our college is "Government College of Engineering and Textile Technology Berhampore". There is another college named "Government College of Engineering and Textile Technology Serampore". As the names are quite similar, those who are unaware of existence of both the colleges, often get confused. And mistake one with other.
Given a string, if it contains the word berhampore (case insensitive), print GCETTB or if it contains serampore(case-insensitive), print GCETTS . If the string contains neither print Others. If it contains both Berhampore and Serampore print Both

Input

First line contains single integer T, No. of test case
Next line for every test contain case a string S
Output
Print GCETTB or GECTTS or Others or Both on a new line

Constraints

1 <= T <= 10
0 <= len(S) <= 100
S contain a-z and A-Z and space only
Sample Input

3
Government clg Berhampore
SeRaMporE textile college
Girls college Kolkata
Sample Output
GCETTB GCETTS Others

Explanation
Self-Explanatory
*/


// C++ implementation of the approach
#include <bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;

// Function that returns true if the word is found
bool isWordPresent(string sentence, string word)
{
	transform(sentence.begin(), sentence.end(),	sentence.begin(), ::tolower);
    //cout<<sentence<<endl;
	stringstream s(sentence);

	string temp;

	while (s >> temp) {

		// Compare the current word
		// with the word to be searched
		if (temp.compare(word) == 0) {
		    //cout<<temp<<endl;
			return true;
		}
	}
	return false;
}

// Driver code
int main()
{
  int test;
  cin>>test;
  while(test!=0){
    bool se =false,b=false;
	std::string s;
std::getline(std::cin >> std::ws, s);
    //cout<<s<<endl;
	string word1 = "berhampore";
    string word2 = "serampore";
	//cout<<s<<endl;
     se=isWordPresent(s, word2);
     b=isWordPresent(s, word1);
    //cout<<se<<" "<<b<<" ";
	if(se==true && b==true)
      	cout<<"Both"<<" ";
    else if (b==true)
		cout << "GCETTB"<<" ";
	else if (se==true)
		cout << "GCETTS"<<" ";
    else cout<<"Others"<<" ";
  test--;
  }
	return 0;
}
