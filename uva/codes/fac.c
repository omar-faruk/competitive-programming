#include<stdio.h>
int main()
{
	long long unsigned a,result=1;
	
	for(a=1;a<=32;a++)
	{
		result*=2;
	}
	
	printf("%llu",result-1);
	
	return 0;
}
