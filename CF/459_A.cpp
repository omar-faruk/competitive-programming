#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	int ax,ay,bx,by,len;
	
	cin>>x1>>y1>>x2>>y2;
	
	if(x1-x2!=0)
	{
		double slope=atan(abs(y1-y2)/abs(x1-x2));
		if(slope!=atan(0) || slope!=45 || slope!=0)
		{
			cout<<-1<<endl;
		}
	}
	
	else if(x1==x2)
	{
		len=abs(y1-y2);
		
		if(len==0)
		{
			
		}
	}
	return 0;
}
