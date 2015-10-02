#include<bits/stdc++.h>
using namespace std;

int main()
{
	char op,num[100000];
	long long int m,temp,ans[100000],mod;
	int i,n,len;
	
	while(cin>>num>>op>>m)
	{
		len=strlen(num);
		
		n=0;
		mod=0;
		
		for(i=0;i<len;i++)
		{
			temp=(mod*10)+(num[i]-'0');
			
			ans[n]=temp/m;
			
			mod=temp%m;
			
			if(n==0 && ans[n]==0) continue;
			n++;
		}	
		
		int zero=0;
		if(op=='/')
		{
			for(i=0;i<n;i++)
			{
				cout<<ans[i];
				zero=1;
			}
			if(!zero)
			{
				cout<<0;
			}
			cout<<endl;
		}
		else cout<<mod<<endl;
		
		
	} 
	return 0;
}
