#include<bits/stdc++.h>
using namespace std;
long long unsigned n,p;
int stan,oli;
 
int main()
{
	while(cin>>n)
	{
		p=1;
		stan=1;
		oli=0;
		while(n>p)
		{
			if(stan==1)
			{
				p*=9;
				stan=0;
				oli=1;
			}
			else
			{
				p*=2;
				stan=1;
				oli=0;	
			}
		}
		if(stan==0) cout<<"Stan wins."<<endl;
		else cout<<"Ollie wins."<<endl;
		
	}
	return 0;
}
