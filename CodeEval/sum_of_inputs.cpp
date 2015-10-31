#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	freopen(argv[2],"r",stdin);
	long long int sum=0;
	int n;
	while(cin>>n){
		sum+=n;
	}
	cout<<sum<<endl;
	return 0;
}
