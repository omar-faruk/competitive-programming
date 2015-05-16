#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	int tc,i,j,k,n;
	cin>>tc;
	while(tc--){
		cin>>n;
		
		for(i=1;i<=n;i++){
			for(k=1;k<=(i-1)*2;k++){
				cout<<" ";
			}
			for(j=1;j<=((n-i)*2)+1;j++){
				cout<<"* ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}
