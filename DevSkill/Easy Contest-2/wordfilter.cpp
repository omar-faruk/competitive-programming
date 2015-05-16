#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	int i,j,tc,fsize,wsize;
	
	string filter[999],words[999],input,word;
	bool catchFilters,isInFilter;
	
	cin>>tc;
	getchar();
	while(tc--){
		getline(cin,input);
		catchFilters=false;
		wsize=fsize=0;
		
		for(i=0;i<int(input.size());i++){
			if(input[i]==','){
				words[wsize++]=word;
				word="";
				catchFilters=true;
			}
			else if(input[i]==' '){
				if(catchFilters){
					filter[fsize++]=word;
					word="";
				}
				else {
					words[wsize++]=word;
					word="";
				}
			}
			else{
				word+=input[i];
			}
		}
		filter[fsize++]=word;
		word="";
		
		for(i=0;i<wsize;i++){
			isInFilter=false;
			for(j=0;j<fsize;j++){
				if(words[i]==filter[j]){
					isInFilter=true;
				}
			}
			if(isInFilter){
				cout<<"* ";
			}
			else cout<<words[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
