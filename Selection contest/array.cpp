#include<bits/stdc++.h>

using namespace std;

int main()
{
	int fs=1,snd=1,trd=1,num,ar[10000],s1[10000],s2[10000];
	cin>>num;
	int fcn=0,scn=0,tcn=0;
	for(int i=0;i<num;i++)
	{
		 cin>>ar[i];
		 
		 if(ar[i]==0)
		 {
			 tcn++;
		 }
		 
		 if(ar[i]<0)
		 {
			 s1[fcn]=ar[i];
			 fcn++;
		 }
		 if(ar[i]>0)
		 {
			 s2[scn]=ar[i];
			 scn++;
		 }
			 
	 }
	 int dg=fcn;
	 if(fcn>2)
	 {
		 dg=fcn-2;
	 }
	 
		cout<<dg;
		for(int i=0;i<dg;i++) cout<<' '<<s1[i];
		cout<<endl;
		cout<<'2'<<' ';
		if(fcn>2) cout<<' '<<s1[fcn-1]<<' '<<s1[fcn-2];
		for(int i=0;i<scn;i++) cout<<' '<<s2[i];
		cout<<endl;
		cout<<tcn;
		for(int i=0;i<tcn;i++) cout<<' '<<'0';
		cout<<endl;
		
		//main();
		return 0;
	}
