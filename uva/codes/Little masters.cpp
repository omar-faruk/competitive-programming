#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc,x,y,r;
	double min,max;
	
	cin>>tc;
	while(tc--)
	{
		cin>>x>>y>>r;
		
		if(x==r || y==r)
		{
			min=0;
			max=r*2;
		}
		
		else if(x==0 && y==0)
		{
			min=r;
			max=r;
		}
		
		else 
		{
			min=r-sqrt((x*x)+(y*y));
			max=r+sqrt((x*x)+(y*y));
		}
		printf("%.2lf %.2lf\n",min,max);
	}
	return 0;
}
