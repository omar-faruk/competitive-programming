#include<stdio.h>
#include<string.h>
int main()
{
	long long int array[5000],i,n,r,tc,sum,count[35000],diff[5000],max;
	
	scanf("%lld",&tc);
	
	while(tc--)
	{
		memset(count,0,sizeof(count));
		scanf("%lld",&r);
		
		for(i=0;i<r;i++)
		{
			scanf("%lld",&array[i]);
		}
		
		max=0;
		
		for(i=0;i<r;i++)
		{
			count[array[i]]=i;
			if(max<array[i])
			{
				max=array[i];
			}
		}
				
		
	}
	return 0; 
}
