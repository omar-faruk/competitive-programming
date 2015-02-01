#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int store[1000][1000],check[500][500],y[1000],ymax,width;

int dp(int pos,int moves)
{
	cout<<pos<<"  "<<moves<<endl;
	
	int pos1;
	
	if(moves==0 || pos>=ymax) return 0;

	if(check[pos][moves]!=-1)
	{
		return store[pos][moves];
	}
		pos1=pos;
		check[pos][moves]=-1;
		
		int points=0;
		
		while(y[pos]<=(width+y[pos1]))
		{
			points++;
			pos++;
		}

        return store[pos][moves]=max(points+dp(pos,moves-1),dp(pos1+1,moves));
}

int main()
{
	int test_case,i,x,dust,tmove;

	cin>>test_case;

	for(i=1;i<=test_case;i++)
	{
		memset(check,-1,sizeof(check));

		cin>>dust>>width>>tmove;

		for(int I=0;I<dust;I++)
		{
			cin>>x>>y[I];
		}

		sort(y,y+dust);

		ymax=dust-1;
		cout<<dp(0,tmove)<<endl;

	}
	return 0;
}
