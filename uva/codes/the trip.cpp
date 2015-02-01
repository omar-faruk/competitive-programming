#include<bits/stdc++.h>
using namespace std;

double money[20000],sum,avg,s,s1;
int n,i;

int main()
{
	while(cin>>n && n)
	{
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>money[i];
			sum=sum+money[i];
		}
		
		avg=sum/n;
		
		avg= long(avg*100+0.5)/100.00;
		
		s1=s=0.0;
		for(i=0;i<n;i++)
		{
			if(money[i]<avg)
			{
				s=s+avg-money[i];
			}
			else s1=s1+money[i]-avg;
		}
		
		printf("$%.02lf\n",min(s,s1));
		
	}
	return 0;
}
