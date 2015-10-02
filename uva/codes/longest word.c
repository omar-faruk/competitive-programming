#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char temp[10000][200],word[200],longest[200];
	
	int len,c,max,n=0;
	

	while(scanf("%s",word))
		{
			if(strcmp(word,"E-N-D")==0)
				break;
			else
			{
				strcpy(temp[n],word);
				n++;
			}
		}
		
		max=0;
		for(c=0;c<n;c++)
		{
			len=strlen(temp[c]);
			if(len>max)
			{
				max=len;
				strcpy(longest,temp[c]);
			}
		}
		for(c=0;c<strlen(longest);c++)
		{
			longest[c]=tolower(longest[c]);
			
			if(longest[c]=='-' ||(longest[c]<=127 && longest[c]>=97))
			{
				printf("%c",longest[c]);
			}
		}
		printf("\n");
	
	return 0;
}
