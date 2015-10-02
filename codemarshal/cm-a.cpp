#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,n,t,cc=1;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		cout<<"Case "<<cc++<<": ";
		if(a-b!=b-c){
			cout<<"Error"<<endl;
		}
		else cout<<a+(b-a)*(n-1)<<endl;
	}
	return 0;
}
