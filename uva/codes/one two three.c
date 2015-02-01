#include<stdio.h>
#include<string.h>
int main()
{
	int tc,i,count;
	char word[10];
	
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%s",word);
		
		if(strlen(word)==5)
		{
			printf("%d\n",3);
		}
		
		if(strlen(word)==3)
		{	
			
			count=0;
			for(i=0;i<3;i++)
			{
				if(word[i]=='e' || word[i]=='n' || word[i]=='o')
				{
					count++;
				}
			}
				if(count>=2)
		{
			printf("1\n");
		}
		else printf("2\n");
		}
	}
	
	return 0;
}
