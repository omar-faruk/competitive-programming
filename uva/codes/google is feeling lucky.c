#include<stdio.h>
int main()
{
	int i,n,pr[11],max,t;
	char web[11][150];
	
	while(scanf("%d",&t) && t!=0)
	{
		for(n=1;n<=t;n++)
		{
			for(i=0;i<10;i++)
			{
				scanf("%s %d",web[i],&pr[i]);
			}
			
			max=-1;
			
			for(i=0;i<10;i++)
			{
				if(pr[i]>max)
				{
					max=pr[i];
				}
			}
			
			printf("Case #%d:\n",n);
			
			for(i=0;i<10;i++)
			{
				if(pr[i]==max)
				{
					printf("%s\n",web[i]);
				}
			}
			
		}
	}
	
	return 0;
}
