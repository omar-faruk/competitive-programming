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
	for(int k=0;k<p;k++)
	 for(int i=0;i<p;i++)
	  for(int j=0;j<p;j++)
	   dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
}
int main()
{
	int tst,cas=0,n,m,u,v,st,nd;
	cin>>tst;
	while(tst--)
	{
		cin>>n>>m;
		
		for(int i=0;i<=104;i++)
		{
			dp[i][i]=0;
		}
		for(int i=0;i<m;i++)
		{
			cin>>u>>v;
			dp[u][v]=1;
			dp[v][u]=1;
		}
		floyd_warshal(n);
		cin>>st>>nd;
		//if(st>nd) swap(st,nd);
		cout<<dp[st][nd]<<endl;
	}
		
  return 0;
}
