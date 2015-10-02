#include<bits/stdc++.h>
using namespace std;

string song[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy",
	"birthday","to","you"};
	
int main()
{
	int i,n,c;
	string name[120];
	
	
	cin>>n;
	
	
	for(i=0;i<n;i++)
	{
		cin>>name[i];
	}
	
	i=0;
	c=0;
	
	if(n<16)
	{
		for(i=0;i<16;i++)
		{
			if(c==n) c=0;
			cout<<name[c]<<": "<<song[i]<<endl;
			c++;
		}
	}
	
	else{
		c=0;
		for(i=0;i<n;i++)
		{
			if(c==16) c=0;
			cout<<name[i]<<": "<<song[c]<<endl;
			c++;
		}
		if(c!=0){
			i=0;
			while(c<16)
			{
				cout<<name[i]<<": "<<song[c]<<endl;
				c++;
				i++;
			}
		}
	}
	
	return 0;
}
