#include<stdio.h>
#include<string.h>
char add[100],a[100],b[100];

void reverse(char number[])
{
	int l,length,x;
	char temp;
	
	length=strlen(number);
	
	for(l=0,x=(length-1);l<x;l++,x--)
	{
		temp=number[l];
		number[l]=number[x];
		number[x]=temp;
		
	}
	return ;
}

int main()
{
	int i,n,j,len,sum;
	
	gets(a);
	gets(b);
	
	if(strlen(a)>strlen(b))
	{
		len=strlen(a);
	}
	
	else
	{
		len=strlen(b);
		
	}
	
	int carry=0;
	
	reverse(a);
	reverse(b);
	
	for(i=0;i<len;i++)
	{
		if(i>=strlen(b))
		{
			b[i]='0';
		}
		if(i>=strlen(a))
		{
			a[i]='0';
		}
		
		sum=(a[i]-'0')+(b[i]-'0')+carry;
		
		carry=0;
		if(sum>9)
		{
			carry=1;
		}
		
		add[i]=(sum%10)+'0';
	}
	if(carry==1)
	{
		sum=1;
		add[i]=(sum%10)+'0';
		
	}
	
	reverse(add);
	puts(add);
	
	return 0;
}
