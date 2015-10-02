#include<bits/stdc++.h>
using namespace std;

int t,temp,tc,price1,price2,i,calls,c;

int main()
{
	cin>>tc;
	
	for(i=1;i<=tc;i++)
	{
		cin>>calls;
		price1=0,price2=0;
		
		while(calls--)
		{
			cin>>t;
			
			temp=(t/30)+1;
			price1=price1+temp*10;
			
			temp=(t/60)+1;
			price2=price2+temp*15;
		}
		
		printf("Case %d: ",i);
		
		if(price1<price2)
		{
			cout<<"Mile "<<price1<<endl;
		}
		else if(price2<price1)
		{
			cout<<"Juice "<<price2<<endl;
		}
		
		else if(price1==price2)
		{
			cout<<"Mile Juice "<<price1<<endl;
		}
	}
	return 0;
}
