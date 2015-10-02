#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{	
	long long n,m,l,count,value,a[100500],i;
	
	while(cin>>n>>m)
	{
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		while(m--)
		{
			map<long,long> ck;
			cin>>l;
			
			count=0;
			for(i=l-1;i<n;i++)
			{
				value=a[i];
				
				if(ck[value]==0)
				{
					count++;
				}
				ck[value]++;
				
			}
			cout<<count<<endl;
		}
	}


	return 0;
}
