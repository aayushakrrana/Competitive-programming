#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("bendin.txt","r",stdin);
	freopen("bendout.txt","w",stdout);

	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int area1=(x2-x1)*(y2-y1);
	int area2=(x4-x3)*(y4-y3);

	//intersections
	int left = max(x1,x3);
	int right = min(x2,x4);
	int bottom = max(y1,y3);
	int top = min(y2,y4);
	
	int A3 = 0;
	if((left < right) && (bottom < top))
	{
		A3 = (right - left) * (top - bottom);
	}
	cout << area1 + area2 - A3;
	return 0;
}