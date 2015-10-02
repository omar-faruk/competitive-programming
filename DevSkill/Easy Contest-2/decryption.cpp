#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	int tc,i;
	string text;
	cin>>tc;
	while(tc--){
		cin>>text;
		for(i=0;i<int(text.size());i++){
			cout<<char(text[i]+4);
		}
		cout<<endl;
	}
	
	return 0;
}
