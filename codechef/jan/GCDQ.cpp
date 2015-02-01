#include <bits/stdc++.h>
 
#define s(n) scanf("%d",&n)
#define s2(a,b) scanf("%d %d",&a,&b)
#define pl(n) printf("%d\n",n)
using namespace std;
 
int main()
{
	int N,Q,T,array[123456],gcd_ans,i,j,L,R;
	
 
	s(T);
	
	while(T--){
		s2(N,Q);
		for(i=1;i<=N;i++){
			s(array[i]);
		}
		
		for(i=1;i<=Q;i++){
			s2(L,R);
			gcd_ans=-1;
			for(j=1;j<L;j++){
				if(gcd_ans==-1){
					gcd_ans=array[j];
				}
				else gcd_ans=__gcd(gcd_ans,array[j]);
			}
			for(j=R+1;j<=N;j++){
				if(gcd_ans==-1){
					gcd_ans=array[j];
				}
				else gcd_ans=__gcd(gcd_ans,array[j]);
			}
			pl(gcd_ans);
		}
	}
	return 0;
}
