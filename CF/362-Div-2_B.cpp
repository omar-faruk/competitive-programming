#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ts,ds[3005],i,d;
	
	while(cin>>ts>>d)
	{
		memset(ds,0,sizeof(ds));
		
		for(i=0;i<d;i++)
		{
			cin>>ds[i];
		}
		sort(ds,ds+d);
		
		if(ds[0]==1 || ds[d-1]==ts)
		{
			cout<<"NO"<<endl;
			continue;
		}
		int possible=1;
		
		for(i=0;i<d;i++)
		{
			if(((ds[i]+1)==ds[i+1]) && ((ds[i+1]+1)==ds[i+2]))
			{
				possible=0;
				break;
			}
		}
		if(possible) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}
