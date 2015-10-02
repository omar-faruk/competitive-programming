#include<stdio.h>
#include<string.h>

char buffer[210],add[210],buffer2[210];

void reverse(char str[])
{
	int I,J,LEN;
	char Temp;
	LEN=strlen(str)-1;

	for(I=0,J=LEN;I<J;I++,J--)
	{
		Temp=str[I];
		str[I]=str[J];
		str[J]=Temp;

	}
	return ;
}

void string_add(char a[] , char b[])
{
	int k,sum,len,carry;
	
	reverse(a);
	reverse(b);

	if(strlen(a)>strlen(b))
	{
		len=strlen(a);
	}
	else len=strlen(b);

    carry=0;

	for(k=0;k<len;k++)
	{
		if(k>=strlen(a))
			{
				a[k]='0';
			}
			if(k>=strlen(b))
			{
				b[k]='0';
			}

		sum=a[k]+b[k]-2*('0')+carry;
		add[k]=(sum%10)+'0';

		carry=0;
		if(sum>9)
		{
			carry=1;
		}
	}

	if(carry>0)
	{
		add[k]=(carry%10)+'0';
	}

	reverse(add);

	return;
}

void string_multiply(char numb[], int a)
{
	int result,len,q,car;

	reverse(numb);


	len=strlen(numb);

	car=0;
	for(q=0;q<len;q++)
	{
		result=((numb[q]-'0')*a)+car;
		buffer[q]=(result%10)+'0';

		car=0;
		if(result>9)
		{
			car=result/10;
		}
	}

	if(car>0)
	{
		up:;
		buffer[q]=(car%10)+'0';
		car=car/10;
	}
	if(car>0)
	{
		q++;
		goto up;
	}

	reverse(buffer);

	return ;
}


void power(char num[],int p,int number)
{
	int n;

	strcpy(buffer,num);
	reverse(buffer);

	for(n=1;n<p;n++)
	{
		string_multiply(buffer,number);
	}

	return;
}

int main()
{
	int N,x,a,I,temp;
	char A[5];

	while(scanf("%d %d",&N,&a)!=EOF)
	{
		temp=a;

			x=0;
			if(N==0 || a==0)
			{
				printf("0\n");
				continue;
			}

		while(temp>0)
			{
				A[x]=(temp%10)+'0';
				temp=temp/10;
				x++;
			}
			A[x]='\0';
		for(I=1;I<=N;I++)
		{
			power(A,I,a);
			string_multiply(buffer,I);
			strcpy(buffer2,buffer);
			memset(buffer,0,sizeof(buffer));
			string_add(add,buffer2);

		}
		printf("%s\n",add);
		memset(add,0,sizeof(add));
		memset(buffer2,0,sizeof(buffer2));

	}
	return 0;
}
