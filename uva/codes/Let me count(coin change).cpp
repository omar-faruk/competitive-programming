#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

long long coin[]={1,5,10,25,50},total,ans;
long long visited_state[5][30010];

long long  recall(long long  ith,long long remaining)
{
	
	if(remaining==0) return 1;
	
	if(remaining<0 || ith>4) return 0;
	
	if(visited_state[ith][remaining]!=-1) return visited_state[ith][remaining];
	 
	return(visited_state[ith][remaining]=recall(ith,remaining-coin[ith])+recall(ith+1,remaining));

}

int main()
{
	memset(visited_state,-1,sizeof(visited_state));
	
	while(cin>>total)
	{
		ans=recall(0,total);
		
		if(ans==1)
		{
			cout<<"There is only 1 way to produce "<<total<<" cents change.\n";
		}
		else 
		cout<<"There are "<<ans<<" ways to produce "<<total<<" cents change.\n";
	}
	return 0;
}
