#include<bits/stdc++.h>

using namespace std;

int main()
{
	string fs,sn;
	int ans;
	cin>>fs>>sn;
	for(int i=0;i<fs.length();i++) fs[i]=tolower(fs[i]);
	for(int i=0;i<sn.length();i++) sn[i]=tolower(sn[i]);
	if(fs==sn)
	{
		ans=0;
	}
	else if(fs<sn) ans=-1;
	else ans=1;
	
	cout<<ans<<endl;
	
	//main();
	return 0;
}
