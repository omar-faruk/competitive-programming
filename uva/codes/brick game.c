#include<stdio.h>
int main()
{
	int tc,i,n,age[300],cap,np;
	
	scanf("%d",&tc);
	
	for(n=1;n<=tc;n++)
	{
		scanf("%d",&np);
		
		for(i=0;i<np;i++)
		{
			scanf("%d",&age[i]);
		}
		
		cap=np/2;
		
		printf("Case %d: %d\n",n,age[cap]);
	}
	
	return 0;
}
