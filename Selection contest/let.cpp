#include<bits/stdc++.h>

using namespace std;

long long int dp[6][30001];
int coin[]={1,5,10,25,50};

long long  func(int pos, int rest)
{
	if(rest==0) return 1;
	
	if(rest<0) return 0;
	
	if(pos>4) return 0;
	
	if(dp[pos][rest]!=-1) return dp[pos][rest];
	
	dp[pos][rest]=func(pos+1,rest)+func(pos,rest-coin[pos]);
	
	return dp[pos][rest];
}
int main()
{
	int num;
	memset(dp,-1,sizeof(dp));
	while(scanf("%d",&num)==1)
	{
		
		long long ans=func(0,num);
		if(ans==1)
		{
		cout<<"There is only 1 way to produce "<<num<<" cents change."<<endl;}
		else
		cout<<"There are "<<ans<<" ways to produce "<<num<<" cents change."<<endl;
	}
	return 0;
}

