#include<stdio.h>
#include<string.h>

void space_out(char str[])
{
	int len,I,N;
	char TEMP[100];
	len=strlen(str);
	
	N=0;
	for(I=0;I<len;I++)
	{
		if(str[I]!=' ')
		{
			TEMP[N]=str[I];
			N++;
		}
	}
	TEMP[N]='\0';
	strcpy(str,TEMP);
	
	return ;
}

int main()
{
	int tc,t;
	char s1[200],s2[200];
	
	scanf("%d",&tc);
	getchar();
	
	for(t=1;t<=tc;t++)
	{
		gets(s1);
		gets(s2);
		
		if(strcmp(s1,s2)==0)
		{
			printf("Case %d: Yes\n",t);
			continue;
		}
		
		space_out(s1);
		space_out(s2);
			
			if(strcmp(s2,s1)==0) printf("Case %d: Output Format Error\n",t);
			
			else printf("Case %d: Wrong Answer\n",t);
	}
	
	return 0;
}
