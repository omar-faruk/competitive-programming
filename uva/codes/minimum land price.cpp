#include<bits/stdc++.h>
using namespace std;
#define LLD long long int
#define MAX 5000000
LLD power(int num, int p)
{
	LLD pow=1;
	
	for(int I=1;I<=p;I++)
	{
		pow*=num;
	}
	return pow;
}

int main()
{
	LLD i,n,tc,c,sum,price[99999];
	
	cin>>tc;
	
	while(tc--)
	{	
		for(i=0;;i++)
		{
			scanf("%lld",&price[i]);
			if(price[i]==0) break;
		}
		
		sort(price,price+i);
		
		sum=0;
		c=1;
		for(n=i-1;n>=0;n--)
		{
			sum=sum+2*power(price[n],c);
			c++;
		}
		if(sum>MAX)
		{
			cout<<"Too expensive"<<endl;
		}
		else cout<<sum<<endl;
	}
	
	return 0;
}
