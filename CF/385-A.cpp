#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,rate[10000],i,ans,kg;
	
	while(cin>>n>>kg)
	{
		ans=0;
		rate[0]=0;
		for(i=1;i<=n;i++)
		{
			cin>>rate[i];
			
			ans=max(ans,rate[i-1]-kg-rate[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
