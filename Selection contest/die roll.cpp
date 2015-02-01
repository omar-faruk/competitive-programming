#include<bits/stdc++.h>

using namespace std;

int main()
{
	int m;
	int a,b;
	cin>>a>>b;
	int x,y;
	int d=max(a,b);
	//cout<<d;
	if((6-d+1)==0)
	{
		x=0;
		y=1;
	}
	else if((6-d+1)==6)
	{
		x=1;
		y=1;
	}
	else
	{
		m=(6-d+1);
		//cout<<m<<endl;
		
		if(m==4)
		{
			x=2;
			y=3;
		}
		else if(m==3)
		{
			x=1;
			y=2;
		}
		else if(m==2)
		{
			x=1;
			y=3;
		}
		else
		{
			x=m;
			y=6;
		}
	}
	cout<<x<<"/"<<y<<endl;
	
	//main();
	return 0;
}
