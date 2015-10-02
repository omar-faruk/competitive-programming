#include<bits/stdc++.h>

using namespace std;

int main()
{
	int st,nd;
	cin>>st>>nd;
	int i=1;
	while(i<=nd)
	{
		nd-=i;
		i++;
		if(i>st)
		{
			i=1;
		}
	}
	cout<<nd<<endl;
	//main();
	return 0;
}
