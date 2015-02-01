#include<bits/stdc++.h>
using namespace std;

int tc,i,n,c,j,size;
string line[200],s,st;

int main()
{	
	cin>>tc;
	
	for(c=1;c<=tc;c++)
	{
		cin>>n;
		getchar();
		for(i=0;i<n;i++)
		{
			getline(cin,s);
			
			size=s.size();
			st.clear();
			for(j=0;j<size;j++)
			{
				if(!(s[j]==' ' && s[j+1]==' '))
				{
					st+=s[j];
				}
			}
			line[i]=st;
		}
		
		printf("Case %d:\n",c);
		for(i=0;i<n;i++)
		{
			cout<<line[i]<<endl;
		}
		if(c<tc)cout<<endl;
	}
	
	return 0;
}
