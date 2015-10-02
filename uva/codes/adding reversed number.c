#include<stdio.h>
#include<string.h>

char result[500]={'0'};

void string_add(char a[],char b[])
{
	int i,len,carry,sum;
	
	if(strlen(a)>strlen(b))
	{
		len=strlen(a);
	}
	else
		len=strlen(b);
		
		carry=0;
		for(i=0;i<len;i++)
		{
			if(i>=strlen(a))
			{
				a[i]='0';
			}
			if(i>=strlen(b))
			{
				b[i]='0';
			}
			
			sum=(a[i]-'0')+(b[i]-'0')+carry;
			
			result[i]=(sum%10)+'0';
			
			carry=0;
			
			if(sum>9)
			{
				carry=1;
			}
		}
		
		if(carry>0)
		{
			result[i]='1';
		}
		else result[i]='\0';
		
		return;
}
int main()
{
	int tc,n,skip_zero;
	char A[500],B[500];
	
	scanf("%d",&tc);
	
	while(tc--)
	{
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		memset(result,0,sizeof(result));
		
		scanf("%s %s",A,B);	
		string_add(A,B);
		
		skip_zero=0;
		
		for(n=0;n<strlen(result);n++)
		{
			if(!skip_zero)
			{
				if(result[n]>'0')
				{
					skip_zero=1;
				}
			}
			
			if(skip_zero) printf("%c",result[n]);
		}
		printf("\n");
	}
	return 0;
}
