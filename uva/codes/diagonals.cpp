#include<bits/stdc++.h>
#include<cmath>

using namespace std;
int main()
{
	long long n=1;
	
	double diagonals;
	
	while(cin>>diagonals && diagonals)
	{
		double d=(9+8*diagonals);
		d=sqrt(d);
		d=d+3;
		
		d=ceil(d/2);
		
		printf("Case %lld: %.0lf\n",n++,d);
	}
	
	return 0;
}
