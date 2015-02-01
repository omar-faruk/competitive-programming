#include<bits/stdc++.h>
using namespace std;
int main()
{
		int gm[10],total_groups,i,temp,count;
	
	while(cin>>total_groups)
	{
		for(i=0;i<10;i++)
		{
			gm[i]=0;
		}
		
		for(i=0;i<total_groups;i++)
		{
			cin>>temp;
			
			if(gm[temp]!=0)
			{
				gm[temp]++;
			}
			else gm[temp]=1;
		}
		
		int o=0,t=0;
		
		count=gm[4];
		
		if(gm[2]>0)
		{
			count+=gm[2]/2;
			t=gm[2]%2;
		}
		
		if(gm[3]>=gm[1])
		{
			count+=gm[3];
			gm[1]=0;
		}
		
		if(gm[1]>gm[3])
		{
			o=gm[1]-gm[3];
			
			count+=gm[3];
		}
		
		if(t>0)
		{
			count++;
			o-=2;
			
			if(o<0)
			{
				o=0;
			}
		}
		
		count+=o/4;
		o=o%4;
		if(o>0)
		{
			count+=1;
		}
		cout<<count<<endl;
	}
	
	return 0;
}
