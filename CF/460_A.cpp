#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,total,i;
	
	cin>>n>>m;
	
	total=n;
	for(i=1;i<=total;i++)
	{
		if(i%m==0) total++;
	}
	cout<<total<<endl;
	return 0;
}
