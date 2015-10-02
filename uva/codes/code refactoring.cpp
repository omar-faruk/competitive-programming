#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,i,lim,tc,c,count;
	
	scanf("%lld",&tc);
	
	for(c=1;c<=tc;c++)
	{
		scanf("%lld",&n);
		
		lim=sqrt(n);
		
		printf("Case #%lld: %lld = ",c,n);
		
		count=1;
		
		for(i=2;i<=lim+1;i++)
		{
			if(n%i==0 && count==1)
			{
				printf("%lld * %lld",i,n/i);
				count++;
				
			}
			else if(n%i==0 && count==2)
			{
				printf(" = %lld * %lld",i,n/i);
				break;
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
