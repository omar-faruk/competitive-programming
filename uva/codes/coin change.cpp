#include<iostream>
#include<cstring>
#define LL long long int
using namespace std;
LL total,coin[]={1,5,10,25,50};

LL state[6][8000];

LL call(LL i, LL rem)
{
	if(rem==0) return 1;
	if(i>4 || rem<0) return 0;
	if(state[i][rem]!=-1) return state[i][rem];
	else
	{
		state[i][rem]=call(i+1,rem)+call(i,rem-coin[i]);
	}
	return state[i][rem];
}

int main()
{
	memset(state,-1,sizeof(state));
	
	while(cin>>total)
	{
		cout<<call(0,total)<<endl;
	}
	return 0;
}
