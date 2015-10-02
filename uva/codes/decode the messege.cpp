#include<bits/stdc++.h>
using namespace std;
int main()
{
	char msg[90000];
	int i,n,tc;
	
	cin>>tc;
	while(tc--)
	{
		for(i=0;;i++)
		{
			scanf("%c",&msg[i]);
			if(msg[i]=='\n' && msg[i-1]=='\n') break;
		}
		
		for(n=0;n<i;n++)
			cout<<msg[n];
	}
	return 0;
}
