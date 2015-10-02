#include<stdio.h>
#include<string.h>
void count_sort(int array[],int size)
{
	int N,max,I,J,TEMP[4000];
	memset(TEMP,0,sizeof(TEMP));
	
	max=0;
	for(I=0;I<size;I++)
	{
		if(array[I]>max)
		{
			max=array[I];
		}
		if(TEMP[array[I]]!=0)
		{
			TEMP[array[I]]++;
		}
		else TEMP[array[I]]=1;
	}
	
	N=0;
	for(I=0;I<=max;I++)
	{
		if(TEMP[I]==0)
		{
			continue;
		}
		else
		{
			if(TEMP[I]>1)
			{
				for(J=0;J<TEMP[I];J++)
				{
					array[N]=I;
					N++;
				}
			}
			
			else
			{
				array[N]=I;
				N++;
			}
		}
	}
	return;
}

int main()
{
	int jump[3999],difference[3999],i,j,jolly;
	
	while(scanf("%d",&j)!=EOF)
	{
		for(i=0;i<j;i++)
		{
			scanf("%d",&jump[i]);
		}
		
		for(i=0;i<j-1;i++)
		{
			difference[i]=jump[i]-jump[i+1];
			
			if(jump[i]<jump[i+1])
			{
				difference[i]=jump[i+1]-jump[i];
			}
		}
		jolly=1;
		
		count_sort(difference,j-1);
		
		for(i=0;i<j-1;i++)
		{
			if(difference[i]!=i+1)
			{
				printf("Not jolly\n");
				jolly=0;
				break;
			}
		}
		if(jolly) printf("Jolly\n");
		
	}
	return 0;
}
