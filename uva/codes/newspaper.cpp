#include<bits/stdc++.h>
using namespace std;

int tc,i,l,letter,lines,sum,n,v,value[400];
char c,line[12345];

int main()
{
	scanf("%d",&tc);
	
	while(tc--)
	{
		memset(value,0,sizeof(value));
		
		scanf("%d",&letter);
		
		for(i=0;i<letter;i++)
		{
			scanf(" %c",&c);
			scanf("%d",&v);
			
			value[c]=v;
		}
		
		scanf("%d",&lines);
		getchar();
		
		sum=0;
		while(lines--)
		{
			gets(line);
			i=strlen(line);
			for(n=0;n<i;n++)
			{
				
				sum+=value[int(line[n])];
			}
		}
		printf("%.2f$\n",double(sum)/100.0);
		
	}
	return 0;
}
