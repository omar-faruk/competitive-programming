#include<bits/stdc++.h>
using namespace std;

int good(long long N,int K)
{
	int a[15],i=0;
	
	for(i=0;i<15;i++)
	{
		a[i]=-1;
	}
	
	while(N>0)
	{
		int c=N%10;
		a[c]=c;
		N=N/10;
	}
	
	for(i=0;i<=K;i++)
	{
		if(a[i]!=i)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main()
{
	long long n,k,count,number;
	
	while(cin>>n>>k)
	{
		count=0;
		while(n--)
			{
				cin>>number;
				if(good(number,k))
				{
					count++;
				}
			}
		cout<<count<<endl;
	}
	return 0;
}
