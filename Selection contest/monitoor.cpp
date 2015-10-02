#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long unsigned x,y,a,b,p,q;
	cin>>x>>y>>a>>b;
	long long unsigned snn=min(x/a,y/b);
	p=a*snn;
	q=b*snn;
	cout<<p<<' '<<q<<endl;
	//printf("%.0lf %.0lf\n",p,q);
	
	//main();
	return 0;
}
