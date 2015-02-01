#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a,b,x,y;
	cin>>a>>b;
	if(a==0&&b>0) puts("Impossible");
	else if(a!=0&&b==0) cout<<a<<' '<<a<<endl;
	else if(a==0 && b==0) cout<<"0 0"<<endl;
	else
	{
		x=max(a,b);
		y=a+b-1;
		cout<<x<<' '<<y<<endl;
	}
	
	//ain();
	return 0;
}
	
