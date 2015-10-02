#include<bits/stdc++.h>
using namespace std;
int main()
{
	int station[10000],i,possible,n;
	
	while(cin>>n && n)
	{
		possible=1;
		
		for(i=0;i<n;i++)
		{
			cin>>station[i];
		}
		
		sort(station,station+n);
		station[n]=1422;
		
		for(i=0;i<n;i++)
		{
			if(station[n]-station[n-1]>100)
			{
				possible=0;
				break;
			}
			if(station[i+1]-station[i]>200)
			{
				possible=0;
				break;
			}
		}
		
		if(possible) cout<<"POSSIBLE"<<endl;
		if(!possible) cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
