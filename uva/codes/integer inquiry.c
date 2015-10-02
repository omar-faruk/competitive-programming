#include<stdio.h>
#include<string.h>

char add[1000],b[1000];

struct buff
{
	char num[1000];
} numb[1000];

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

	j=0;

	for(;;)
	{
		scanf("%s",numb[j].num);

		if(strcmp("0",numb[j].num)==0)
		{
			break;
		}
		j++;
	}

	for(n=0;n<j;n++)
	{
		strcpy(b,numb[n].num);

		if(strlen(add)>strlen(b))
		{
			len=strlen(add);
		}

		else
		{
			len=strlen(b);

		}

		int carry=0;

		reverse(add);
		reverse(b);

		for(i=0;i<len;i++)
		{
			if(i>=strlen(b))
			{
				b[i]='0';
			}
			if(i>=strlen(add))
			{
				add[i]='0';
			}

			sum=(add[i]-'0')+(b[i]-'0')+carry;

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
	}
	puts(add);

	return 0;
}
