#include<stdio.h>
#include<string.h>
int main()
{
	char num2[2500];
	long int num1,i,carry,tc,len,temp;
	
	scanf("%ld",&tc);
	
	while(tc--)
	{
		scanf("%ld",&num1);
		scanf("%s",num2);
		len=strlen(num2);
		
		carry=0;
		i=0;
		temp=0;
		while(i<len)
		{
			temp=(num2[i]-'0')+(carry*10);
			carry=temp%num1;
			i++;
		}
		printf("%ld\n",carry);
	}
	
	return 0;
}
