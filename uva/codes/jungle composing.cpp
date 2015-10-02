#include<bits/stdc++.h>
using namespace std;
double time (char c)
{
	if(c=='W') return 1;
	if(c=='H') return 0.5;
	if(c=='Q') return 0.25;
	if(c=='E') return 0.125;
	if(c=='S') return 0.0625;
	if(c=='T') return 0.03125;
	if(c=='X') return 0.015625;
	return 0;
}
int main()
{
	int size,i,count;
	
	double sum;
	
	string s;
	
	while(cin>>s)
	{
		if(s=="*") break;
		
		size=s.size();
		count=0;
		for(i=0;i<size;i++)
		{
			if(s[i]=='/')
			{
				if(sum==1)
				{
					count++;
				}
				sum=0;
			}
			sum=sum+time(s[i]);
		}
		cout<<count<<endl;
	}
	return 0;
}
