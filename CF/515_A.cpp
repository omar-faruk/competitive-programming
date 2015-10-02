#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,s,sum,dis;
	
	while(cin>>a>>b>>s){
	
		if((abs(a)+abs(b))==s){
			cout<<"Yes"<<endl;
		}
		else if(a==0 && b==0 && s%2==0){
			cout<<"Yes"<<endl;
		}
		else {
			sum=abs(a)+abs(b);
			dis=sum-s;
			if(sum<s && dis%2==0){
				cout<<"Yes"<<endl;
			}
			else cout<<"No"<<endl;
		}
	}
	
	return 0;
}
