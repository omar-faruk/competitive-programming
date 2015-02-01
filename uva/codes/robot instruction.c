#include<stdio.h>
#include<string.h>
struct instruction{
	char command[100];
} cmd[1000];

int main()
{
	int tc,i,ins,nth,position;
	
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&ins);
		getchar();
		position=0;
		for(i=0;i<ins;i++)
		{
			scanf("%s",cmd[i].command);
			
			if(strcmp(cmd[i].command,"LEFT")==0)
			{
				position--;
			}
			else if(strcmp(cmd[i].command,"RIGHT")==0)
			{
				position++;
			}
			else
			{
				scanf("%s %d",cmd[i].command,&nth);
				strcpy(cmd[i].command,cmd[nth-1].command);
				
				if(strcmp(cmd[i].command,"LEFT")==0)
				{
					position--;
				}
				else if(strcmp(cmd[i].command,"RIGHT")==0)
				{
					position++;
				}
			}
			
		}
		printf("%d\n",position);
	}
	return 0;
}
