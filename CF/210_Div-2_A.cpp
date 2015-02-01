#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dimension,sum,c,r;
	
	while(cin>>dimension>>sum)
	{
		for(c=1;c<=dimension;c++)
		{
			for(r=1;r<=dimension;r++)
			{
				if(c==r)
				{
					cout<<sum<<" ";
				}
				else cout<<'0'<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
