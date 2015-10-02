#include<bits/stdc++.h>
#define MAX 1000003
using namespace std;

long long mk[MAX+1];
long long ch[MAX+1];
void seive()
{
	
	for(int i=2;i*i<=MAX;i++)
	{
		if(!ch[i])
		{
			for(int j=i*i;j<=MAX;j+=i)
			{
				ch[j]=1;
			}
		}
	}
	int k=0;
	for(int i=2;i<=MAX;i++)
	{
		if(!ch[i])
		{
			mk[k]=(i*i);
			k++;
		}
	}
}
int main()
{
	seive();
	long long a,b;
	cin>>a;
	for(long long i=1;i<=a;i++)
	{
		cin>>b;
		int flag=0;
		for(long long k=0;k<sqrt(b);k++)
		{
			if(mk[k]==b)
			{
				flag=1;
				puts("YES");
				break;
			}
			else if(mk[k]>b)
			{
				goto m;
			}
		}
		m:
		if(!flag) puts("NO");
	}
	
	return 0;
}
