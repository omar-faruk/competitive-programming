#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>

#define clear(A) memset(A,0,sizeof(A))
using namespace std;

int main()
{
	string a,b;
	int l1,l2,i,tc,move;
	int A[256];
	
	cin>>tc;
	
	while(tc--)
	{
		getchar();
		getline(cin,a);
		getline(cin,b);
		clear(A);
		move=0;
		
		l1=a.size();
		l2=b.size();
		
		if(l1>l2)
		{
			move+=l1-l2;
		}
		
		if(a==b)
		{
			cout<<0<<endl;
			continue;
		}
		
		for(i=0;i<l1;i++)
		{
			A[a[i]]++;
		}
		
		for(i=0;i<l2;i++)
		{
			if(A[b[i]]<=0)
			{
				move++;
			}
			
			if(A[b[i]]>0)
			{
				A[b[i]]--;
			}
		}
		cout<<move<<endl;
	}
	return 0;
}
