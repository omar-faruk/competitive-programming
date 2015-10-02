#include<stdio.h>
#define get goto
int main()
{
	int a,b,i,n,j,chk[5],count,num,k;
	
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		count=0;
		for(i=a;i<=b;i++)
		{
			num=i;
			n=0;
			int same=0;
			while(num>0)
			{
				chk[n]=num%10;
				num=num/10;
				n++;
			}
			for(k=0;k<n;k++)
			{
				for(j=k+1;j<n;j++)
				{
					if(chk[k]==chk[j])
					{
						same=1;
						get out;
					}
				}
			}
			out:;
			if(same!=1){
				count=count+1;;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
