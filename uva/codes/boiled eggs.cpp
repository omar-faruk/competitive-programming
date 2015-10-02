#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main()
{
	int n,w[101],i,tc,p,q,sum,count,I;
	
	cin>>tc;
	
	for(I=1;I<=tc;I++)
	{
		cin>>n>>p>>q;
		
		for(i=0;i<n;i++)
		{
			cin>>w[i];
		}
		
		sum=0;
		count=0;
		
		for(i=0;i<n;i++)
		{
			sum=sum+w[i];
			
			if(i>p-1 || sum>q)
			{
				break;
			}
			
			if(i<=p-1 || sum<=q)
			{
				count++;
			}
		}
		
		printf("Case %d: %d\n",I,count);
	}
	return 0;
}
