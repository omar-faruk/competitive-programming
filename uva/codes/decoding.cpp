#include<iostream>
#include<string>
using namespace std;

int tc,len,i,c,n,l;
string s;
char C;
int main()
{
	cin>>tc;
	
	for(c=1;c<=tc;c++)
	{
		cin>>s;
		
		len=s.size();
		cout<<"Case "<<c<<": ";
		
		l=0;
		
		for(i=0;i<len;i++)
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				C=s[i];
				l=0;
			}
			
			if(s[i]>='0' && s[i]<='9')
			{
				l=(l*10)+(s[i]-'0');	
				if((s[i+1]>='A' && s[i+1]<='Z') || i==len-1)
				{
					for(n=0;n<l;n++)
					{
						cout<<C;
					}
					l=0;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
