#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL coins[23],pre[23][30000];

LL call(LL pos,LL total)
{
	if(total==0) return 1;
	
	if(pos>21 || total<0) return 0;
	
	if(pre[pos][total]!=-1) return pre[pos][total];
	
	
	return pre[pos][total]=call(pos,total-coins[pos])+call(pos+1,total);
}

int main()
{
	LL i,total;
	memset(pre,-1,sizeof(pre));
	
	for(i=1;i<22;i++)
	{
		coins[i]=i*i*i;
	}
	
	while(cin>>total)
	{
		cout<<call(1,total)<<endl;
	}
	
	
	return 0;
}


