#include<bits/stdc++.h>
#define LLD long long unsigned
using namespace std;
int tc;
LLD d[2],ans[1];
int main()
{

	scanf("%d",&tc);
	
	while(tc--)
	{
		scanf("%lld",&d[1]);
		ans[1]=sqrt(1+(4*2*d[1]))-1;
		ans[1]=ans[1]/2;
		printf("%lld\n",ans[1]);
	}
	return 0;
}
