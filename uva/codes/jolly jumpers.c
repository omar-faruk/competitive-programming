#include<stdio.h>

void bubble_sort(int array[],int size)
{
	int I,TEMP,J;
	
	for(I=0;I<size-1;I++)
	{
		for(J=I+1;J<size;J++)
		{
			if(array[I]>array[J])
			{
				TEMP=array[I];
				array[I]=array[J];
				array[J]=TEMP;
			}
		}
		
	}
	return ;
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
		
		bubble_sort(difference,j-1);
		
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
