#include<bits/stdc++.h>

using namespace std;

long long int dp[6][30001];
int coin[]={1,5,10,25,50};

long long int func(int pos, int rest)
{
	if(rest==0) return 1;
	
	if(rest<0||pos>4) return 0;
	
	//if(dp[pos][rest]!=-1) return dp[pos][rest];
	
	int sum=0;
	
	for(int i=0;i<=rest/coin[pos];i++)
	{
		sum+=func(pos+1,(rest-(coin[pos]*i)));
	}
	return sum;
}
int main()
{
	int num;
	while(cin>>num)
	{
		//memset(dp,-1,sizeof(dp));
		
		cout<<"There are "<<func(0,num)<<" ways to produce "<<num<<" cents change."<<endl;
	}
	return 0;
}
