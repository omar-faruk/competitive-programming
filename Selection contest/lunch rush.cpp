#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int max=-999999999,num,tim,a,b,d;
	cin>>num>>tim;
	for(long long int i=0;i<num;i++)
	{
		cin>>a>>b;
		if(b>tim)
		{
			d=a+tim-b;
		}
		else
		{
			d=a;
		}
		if(d>max)
		{
			max=d;
		}
	}
	cout<<max<<endl;
	//main();
	return 0;
}
