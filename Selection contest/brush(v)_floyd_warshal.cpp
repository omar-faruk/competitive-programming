#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<fstream>
#include<iostream>
#include<list>
#include<map>
#include<memory>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>
#include<iomanip>

#define INF (1<<28)

using namespace std;

int dp[105][105];

void floyd_warshal(int p)
{
	for(int k=1;k<=p;k++)
	 for(int i=1;i<=p;i++)
	  for(int j=1;j<=p;j++)
	   dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
}
int main()
{
	int tst,cas=0,n,m,u,v,w;
	cin>>tst;
	while(tst--)
	{
		cin>>n>>m;
		
		for(int i=0;i<=104;i++)
		{
			for(int j=0;j<=104;j++)
			{
				if(i==j) dp[i][j]=0;
				else dp[i][j]=INF;
			}
		}
		for(int i=0;i<m;i++)
		{
			cin>>u>>v>>w;
			dp[u][v]=min(dp[u][v],w);
			dp[v][u]=min(dp[v][u],w);
		}
		floyd_warshal(n);
		cout<<"Case "<<++cas<<": ";
		if(dp[1][n]>=INF)  puts("Impossible");
		else cout<<dp[1][n]<<endl;
		
		//cout<<INF<<endl;
	}
		
  return 0;
}
