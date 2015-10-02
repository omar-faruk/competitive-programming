#include<bits/stdc++.h>
#define LLU unsigned long long

using namespace std;

LLU big_mod(LLU b, LLU p, LLU m)
{
	if(b==0) return 0;
	
	else if(b==1 || p==0) return 1;
	
	if(p%2!=0) return (b%m)*big_mod(b,p-1,m)%m;
	else 
	{
		LLU c=big_mod(b,p/2,m)%m;
		return (c*c)%m;
	}
}

int main()
{
	unsigned long long B,p,m;
	
	while(cin>>B>>p>>m)
	{
		cout<<big_mod(B,p,m)<<endl;
	}
	
	return 0;
}
