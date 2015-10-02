#include<bits/stdc++.h>
using namespace std;

map<long long,long long>jack;

long long jack_cd,jill_cd;
int main()
{
	long long jack_own,jill_own,i,count;
	
	while(scanf("%lld %lld",&jack_own,&jill_own) && jack_own && jill_own)
	{
		for(i=0;i<jack_own;i++)
		{
			scanf("%lld",&jack_cd);
			jack[jack_cd]++;
		}
		count=0;
		for(i=0;i<jill_own;i++)
		{
			scanf("%lld",&jill_cd);
			
			if(jack[jill_cd]>0)
			{
				count++;
			}
		}
		printf("%lld\n",count); 
		jack.clear();
	}
	return 0;
}
