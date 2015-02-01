#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int len=str.length();
	int cnt=0,ans=1;
	for(int i=1;i<len;i++)
	{
		if(str[i]==str[i-1])
		{
			cnt++;
		}
		if(cnt==5)
		{
			cnt=0;
			ans++;
		}
		
		else if(str[i]!=str[i-1])
		{
			cnt=0;
			ans++;
		}
	}
	cout<<ans<<endl;
	//main();
	return 0;
}
