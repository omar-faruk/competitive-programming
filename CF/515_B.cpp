#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)

using namespace std;
int main()
{
	int hbI[200],hgI[200];
	
	int nB,nG,hB,hG,i,index,gi,bi;
	
	while(cin>>nB>>nG){
		memset(hbI,0,sizeof hbI);
		memset(hgI,0,sizeof hgI);
		
		cin>>hB;
		for(i=0;i<hB;i++){
			cin>>index;
			hbI[index]=1;
		}
		
		cin>>hG;
		for(i=0;i<hG;i++){
			cin>>index;
			hgI[index]=1;
		}
		for(i=0;i<10000;i++){
			gi=i%nG;
			bi=i%nB;
			if(hbI[bi]==1 || hgI[gi]==1){
				hbI[bi]=1;
				hgI[gi]=1;
			}
		}
		
		index=1;
		for(i=0;i<nB;i++){
			if(hbI[i]==0 ){
				index=0;
				break;
			}
		}
		
		if(index){
			for(i=0;i<nG;i++){
				if(hgI[i]==0 ){
					index=0;
					break;
				}
			}
		}
		else cout<<"Yes"<<endl;
	}
	return 0;
}
