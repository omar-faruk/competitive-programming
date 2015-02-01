#include<bits/stdc++.h>

using namespace std;
double val[10000010];

int main()
{
	int tc,n,i;
	
	scanf("%d",&tc);
	
	while(tc--)
	{
		scanf("%d",&n);
		
		val[1]=log10(1.0);
		if(val[n]==0)
		{
			for(i=2;i<=n;i++)
			{
				val[i]=val[i-1]+log10(double(i));
			}
		}
	printf("%d\n",int(val[n])+1);
		
	}
	return 0;
}
