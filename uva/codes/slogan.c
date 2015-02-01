#include<stdio.h>
#include<string.h>

struct slogan
	{
		char sg[1000];
	} slg[100];
	
int main()
{
	char find[1000];
	int i,j,n,a;
	
	while(scanf("%d",&n)==1)
	{
		getchar();
		for(i=0;i<(n*2);i++)
		{
			gets(slg[i].sg);
		}
		
		scanf("%d",&a);
		getchar();
		
		for(i=0;i<a;i++)
		{
			gets(find);
			
			for(j=0;j<(n*2);j++)
			{	
				if(strcmp(find,slg[j].sg)==0)
				{
					puts(slg[j+1].sg);
					break;
				}
			}
		}
		
	}
	
	return 0;
}
