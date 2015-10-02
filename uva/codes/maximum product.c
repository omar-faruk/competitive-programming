#include<stdio.h>
int main()
{
	long long int a[100],mp,c,i,n,t=0;
	
	while(scanf("%lld",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		
		long long int max=0;
		for(i=0;i<n;i++)
		{
			mp=1;
			for(c=i;c<n;c++)
			{
				mp=mp*a[c];
				
			if(mp>max)
				{
					max=mp;
				}
			
			}
		}
		printf("Case #%lld: The maximum product is %lld.\n\n",++t,max);
	}
	return 0;
}
