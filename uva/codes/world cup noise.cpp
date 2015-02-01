#include<bits/stdc++.h>
using namespace std;
long long unsigned fib[100];
int main()
{
	int n,c,i;
	fib[1]=2;
	fib[2]=3;
	
	for(i=3;i<53;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	cin>>c;
	
	for(i=1;i<=c;i++)
	{
		cin>>n;
		printf("Scenario #%d:\n%llu\n\n",i,fib[n]);
	}
	
	return 0;
}
