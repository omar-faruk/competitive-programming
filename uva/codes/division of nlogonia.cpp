#include<bits/stdc++.h>
using namespace std;
int x,y;
string pos(int x1,int y1)
{
	if(x1==x || y1==y) return "divisa";
	
	if(x<x1 && y<y1) return "NE";
	if(x>x1 && y<y1) return "NO";
	
	if(x<x1 && y>y1) return "SE";
	else return "SO"; 
	
}
int main()
{
	int x1,y1,tc;
	
	while(cin>>tc && tc>0)
	{
		cin>>x>>y;
		while(tc--)
		{
			cin>>x1>>y1;
			cout<<pos(x1,y1)<<endl;
		}
	}
	return 0;
}
