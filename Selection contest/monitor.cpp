#include<bits/stdc++.h>

using namespace std;

int main()
{
	double x,y,a,b,p,q;
	cin>>x>>y>>a>>b;
	double snn=min(x/a,y/b);
	p=a*snn;
	q=b*snn;
	//cout<<p<<' '<<q<<endl;
	if(p<1||q<1)
	{
		p=0.0;
		q=0.0;
	}
	printf("%.0lf %.0lf\n",p,q);
	
	//main();
	return 0;
}
