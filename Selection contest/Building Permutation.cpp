#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long num,ar[1000000],sum=0;
	cin>>num;
	for(long long i=1;i<=num;i++)
	{
		cin>>ar[i];
	}
	sort(ar+1,ar+1+num);
	for(long long i=1;i<=num;i++)
	{
		sum+=abs(ar[i]-i);
	}
	cout<<sum<<endl;
	//main();
	return 0;
}
