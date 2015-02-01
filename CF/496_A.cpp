#include <bits/stdc++.h>
#define INF 922337203685477580

using namespace std;
int main()
{
	long long  holds[23456],i,dif,n;
	
	dif=INF;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>holds[i];
	}
	
	for(i=2;i<n;i++){
		dif=min(dif,abs(holds[i+1]-holds[i-1]));
	}
	cout<<dif<<endl;
	return 0;
}
