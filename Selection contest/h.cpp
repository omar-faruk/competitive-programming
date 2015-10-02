#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<fstream>
#include<iostream>
#include<list>
#include<map>
#include<memory>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	int tst,cas=0,num,qr,l,r,ar[100004],sqr[100000];
	cin>>tst;
	while(tst--)
	{
		cin>>num>>qr;
		for(int i=1;i<=num;i++)
		{
			cin>>ar[i];
		}
		int sq=sqrt(num);
		for(int i=1;i<=sq+1;i++)
		{
			sqr[i]=9999999;
		}
		for(int i=0;i<=num;i++)
		{
			int a=ceil(i/(double)sq);
			sqr[a]=min(sqr[a],ar[i]);
		}
		cout<<"Case "<<++cas<<":"<<endl;
		for(int i=0;i<qr;i++)
		{
			cin>>l>>r;
			int mv=9999999;
			int lg=ceil(l/sq)+1;
			int rg=ceil(l/sq)-1;
			if(lg>rg)
			{
				for(int k=l;k<=r;k++)
				{
					mv=min(mv,ar[k]);
				}
			}
			else
			{
				for(int k=lg;k<=rg;k++)
				{
					mv=min(mv,sqr[k]);
				}
				for(int k=l;k%sq!=1;k++)
				{
					mv=min(mv,ar[k]);
				}
				for(int k=r;k%sq!=0;k--)
				{
					mv=min(mv,ar[k]);
				}
			}
			cout<<mv<<endl;
		}
	}

	return 0;
}
