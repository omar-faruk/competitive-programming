#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	int tc,i;
	string t1,t2;
	
	cin>>tc;
	while(tc--){
		cin>>t1>>t2;
		for(i=0;i<int(max(t1.size(),t2.size()));i++){
			if(i<int(t1.size())){
				cout<<t1[i];
			}
			if(i<int(t2.size())){
				cout<<t2[i];
			}
		}
		cout<<endl;
	}
	
	
	return 0;
}
