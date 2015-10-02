#include<iostream>
#include<cmath>
#define lld long long
using namespace std;

lld ans,store[105][105];

lld nCr(int n, int r)
{
	if(n==r ||r==0) return 1;
	
	if(r==1) return n;
	
	if(store[n][r]) return store[n][r];
	
	return store[n][r]=(nCr(n-1,r)+nCr(n-1,r-1));
	
}

int main()
{
	int n,r;
	while(cin>>n>>r &&n &&r)
	{
		ans=nCr(n,r);
		cout<<n<<" things taken "<<r<<" at a time is "<<ans<<" exactly."<<endl;

	}
	return 0;
}
