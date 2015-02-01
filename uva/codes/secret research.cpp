#include<bits/stdc++.h>
using namespace std;

char result(string s)
{
	int l;
	l=s.size();
	
	if(s=="78" || s=="1" || s=="4") return '+';
	if(s[l-2]=='3' && s[l-1]=='5') return '-';
	if(s[0]=='9' && s[l-1]=='4' ) return '*';
	return '?';
}

int main()
{
	int tc;
	string s;
	
	cin>>tc;
	while(tc--)
	{
		cin>>s;
		cout<<result(s)<<endl;
	}
	return 0;
}
