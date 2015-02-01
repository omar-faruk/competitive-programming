#include<stdio.h>
#include<string.h>
int count[155];

double factorial(int number)
{
	double fact=1;
	
		while(number>0)
		{
			fact*=number;
			number--;
		}
	
	return fact;
}
void set_sount()
{
	int I;
	
	for(I=30;I<=150;I++)
	{
		count[I]=0;
	}
	
	return;
}

int main()
{
	double d,sum;
	int tc,N,i,n;
	char word[25];
	
	scanf("%d",&tc);
	{
		for(N=1;N<=tc;N++)
		{
			scanf("%s",word);
			
			set_sount();
			
			for(i=0;i<strlen(word);i++)
			{
				if(count[word[i]]>0)
				{
					count[word[i]]++;
				}
				else count[word[i]]=1;
			}
			
			sum=1;
			for(i=30;i<=150;i++)
			{
				if(count[i]>1)
				{
					sum=sum*factorial(count[i]);
				}

			}
			
			n=strlen(word);
			
			d=factorial(n);
			
			if(sum>1)
			{
				d=d/sum;
			}
			printf("Data set %d: %.0lf\n",N,d);
		}
	}
	return 0;
}
