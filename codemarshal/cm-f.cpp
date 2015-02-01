#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t,n;
	
	cin>>t;
	double bounty,bi;
	
	while(t--){
		bounty=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>bi;
			bounty+=bi/double(n);
		}
		printf("%.14lf\n",bounty);
	}
	
	return 0;
}
