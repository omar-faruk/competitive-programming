#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	int i,score,n,max_index,max_score,x,p;
	int a[100010];
	
	while(cin>>n>>p>>x){
		
		for(i=0;i<n;i++){
			cin>>score;
			a[i]=p*score;
			p-=x;
			if(i==0){
				max_score=a[i];
				max_index=i;
			}
			if(max_score<a[i]){
				max_index=i;
				max_score=a[i];
			}
			
		}
		cout<<max_index+1<<endl;
	}
	
	
	return 0;
}
