#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	freopen(argv[2],"r",stdin);
	int i,j,k,n;
	while(cin>>i>>j>>n){

		for(k=1;k<=n;k++){
			if(k%i==0){
				cout<<'F';
			}

			if(k%j==0){
				cout<<'B';
			}
			
			if(k%i!=0 && k%j!=0){
				cout<<k;
			}

			if(k<n){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
