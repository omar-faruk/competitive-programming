#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	long long unsigned arr[30];
	int tc,n;
	arr[1]=1;
	arr[0]=1;
	for(int i=2;i<=20;i++){
		arr[i]=arr[i-1]*i;
	}
	cin>>tc;
	while(tc--){
		cin>>n;
		cout<<arr[n]<<endl;
	}
	
	return 0;
}
