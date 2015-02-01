#include<stdio.h>
int main()
{
	int i,n,c;
	int prime[10000];
	
	for(i=1;i<10000;i++)
	{
		prime[i]=i;
	}
	
	for(i=1;i<15;i++)
	{
		prime[prime[i]]=-1;		
	}
	puts("\n");

		
	for(i=1;i<50;i++)
	{
		if(prime[i]!=-1)
		{
			printf("%d ",prime[i]);
		}
	}
	
	
	return 0;
}
