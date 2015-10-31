#include <bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)

using namespace std;

int  toInt(string s){
	int num=0;
	for(int i=0;i<s.size()-1;i++){
		num=num*10+s[i]-'0';
	}
	return num;
}

int main(int argc, char *argv[])
{
	freopen(argv[2],"r",stdin);
	string v,z,w,h,v1,v2,v3,v4;
	int vc,zc,wc,hs;
	int total_childs,total_candy;
	while(cin>>v>>v1>>z>>v2>>w>>v3>>h>>hs){
		vc=toInt(v1);
		zc=toInt(v2);
		wc=toInt(v3);
		
		total_childs=vc+zc+wc;
		total_candy=(vc*3+zc*4+wc*5)*hs;
		cout<<(total_candy/total_childs)<<endl;
	}	

	return 0;
}
