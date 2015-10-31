#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
using namespace std;
int main(int argc, char *argv[])
{
	string ans,c_ans;
	int prize[300000];
	int i,count,n,test_case,max_prize;
	
	cin>>test_case;
	
	while(test_case--){
		
		cin>>n>>c_ans>>ans;
		
		for(i=0;i<=n;i++){
			cin>>prize[i];
		}
		count=0;
		max_prize=prize[0];
		for(i=0;i<n;i++){
			if(ans[i]==c_ans[i]){
				count++;
				if(count!=n){
					max_prize=prize[count]>max_prize?prize[count]:max_prize;
				}
			}
		}
		if(count==n) max_prize=prize[n];
		cout<<max_prize<<endl;
		c_ans=ans="";
	}
	
	return 0;
}
