#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,roads,count,result,Case=1;
	
	while(cin>>roads>>n && roads && n)
	{
		cout<<"Case "<<Case++<<": ";
		if(n+n*26<roads)
		{
			cout<<"impossible"<<endl;
			continue;
		}
		if(roads<=n)
		{
			cout<<0<<endl;
			continue;
		}
		
		result=0;
		count=0;
		
		while(1)
		{
			result=n+(n*count);
			if(result>=roads) break;
			count++;
		}
		cout<<count<<endl;
	}
	
	return 0;
}
