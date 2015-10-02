#include<stdio.h>
int main()
{
	int i,n,j;
	
	for(i=1;i<=5;i++) //counting lines
	{
			j=5-i;
			while(j>0)
			{
				printf(" "); //printing spaces on each lines
				j--;
			}
			
		for(n=1;n<=i;n++) //printig stars
		{
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=4;i>0;i--) //counting lines
	{
			j=5-i;
			while(j>0)
			{
				printf(" "); //printing spaces on each lines
				j--;
			}
		for(n=1;n<=i;n++) //printig stars
		{
			printf("* ");
		}
		if(i>1)printf("\n");
	}

return 0;
}
