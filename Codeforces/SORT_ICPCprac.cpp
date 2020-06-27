#include <bits/stdc++.h>
#include <fstream>
#include<vector>
using namespace std;

int main () {
	vector<int> ar;
  fstream myfile ("F:\\_dump\\Codeforces\\sort.in");
  ofstream myfile1 ("F:\\_dump\\Codeforces\\sortICPC.txt");
  string line;
  int n;
  if (myfile.is_open())
  {
  	  //myfile >> n;

   //cout << n << endl;  
   while (myfile.good() )
    {
	myfile>>n;
	
	
	ar.push_back(n);
      //cout << n<< '\n';
    }
    myfile.close();
  }
  

  else cout << "Unable to open file"; 
  ar.erase(ar.begin()); 
cout<<ar.size()<<endl;
sort(ar.begin(),ar.end());
if (myfile1.is_open())
  {
    for(int count = 0; count < ar.size(); count ++){
        myfile1 << ar[count] << " " ;
    }
    myfile1.close();
  }
cout<<"DONE";
  return 0;
}

