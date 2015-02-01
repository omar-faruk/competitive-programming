#include<bits/stdc++.h>

using namespace std;
long long a[99000];

int main()
{
	int tc,i,size,c,l,j,symmetric;
	char N,s;
	
	cin>>tc;
	
	for(c=1;c<=tc;c++)
	{
		cin>>N>>s>>size;
		
		symmetric=1;

		for(i=0;i<size*size;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			{
				symmetric=0;
			}
		}
				
		j=size*size-1;		
		cout<<"Test #"<<c<<": "; 
		
		if(symmetric)
		{
			for(i=0,l=j;i<l;i++,l--)
			{
				if(a[i]!=a[l])
				{
					symmetric=0;
					break;
				}
			}
		}
		
		if(symmetric) cout<<"Symmetric."<<endl;
		else cout<<"Non-symmetric."<<endl;
	}
	
	return 0;
}
