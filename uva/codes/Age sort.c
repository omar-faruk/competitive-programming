#include<stdio.h>
#include<string.h>
#define LLU long long unsigned
LLU age[2000005],i,n,j,count,sort[2000005],sorted[2000005],max,min;
int main()
{

	while(scanf("%llu",&n)==1)
	{	
		for(i=0;i<n;i++)
		{
			sort[i]=0;
		}
		
		for(i=0;i<n;i++)
		{
			scanf("%llu",&age[i]);
		}
		
		for(i=0;i<n;i++)
		{
			if(sort[age[i]]!=0)
			{
				sort[age[i]]++;
			}
			else sort[age[i]]=1;
		}
		
		count=0;
		
		for(i=0;i<2000;i++)
		{
			if(sort[i]!=0)
			{
				if(sort[i]>1)
				{
					for(j=0;j<sort[i];j++)
					{
						sorted[count]=i;
						count++;
					}
				}
				
			else 
			{
				sorted[count]=i;
				count++;
			}
			
			}
		}
		
		for(i=0;i<n;i++)
		{
			printf("%llu",sorted[i]);
			if(i<(n-1)) printf(" ");
		}
		
		printf("\n");
	}

	return 0;
}
