#include<stdio.h>
int main()
{
	int arr[150][150];
	int rsum,csum,rf,cf,size,row,col,cer,rer;
	
	while(scanf("%d",&size) && size)
	{
		for(row=0;row<size;row++)
		{
			for(col=0;col<size;col++)
			{
				scanf("%d",&arr[row][col]);
			}
		}
		
		cer=0;
		rer=0;
		for(col=0;col<size;col++)
		{
			rsum=0;
			for(row=0;row<size;row++)
			{
				rsum=rsum+arr[col][row];
			}
			if(rsum%2!=0)
			{
				rf=col;
				rer++;
			}
		}
		
		for(row=0;row<size;row++)
		{
			csum=0;
			for(col=0;col<size;col++)
			{
				csum=csum+arr[col][row];
			}
			if(csum%2!=0)
			{
				cf=row;
				cer++;
			}
		}
		
		if(cer==0 && rer==0)
		{
			printf("OK\n");
		}
		
		else if(cer==1 || rer==1)
		{
			printf("Change bit (%d,%d)\n",rf+1,cf+1);
		}
		
		else {
			printf("Corrupt\n");
		}
		
		
	}

return 0;
}
