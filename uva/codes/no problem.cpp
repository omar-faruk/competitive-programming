#include<iostream>
using namespace std;

int have,make[20],required[20],i,n,count=0;

int main()
{
	while(cin>>have && have>=0)
	{
		for(i=0;i<12;i++)
		{
			cin>>make[i];
		}
		
		for(i=0;i<12;i++)
		{
			cin>>required[i];
		}
		
		cout<<"Case "<<++count<<":\n";
		for(i=0;i<12;i++)
		{
			if(have>=required[i])
			{
				cout<<"No problem! :D\n";
				have-=required[i];
			}
			else cout<<"No problem. :(\n";
			have+=make[i];
		}
	}
	return 0;
}
