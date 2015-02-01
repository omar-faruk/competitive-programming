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

int tst,cas=0,num,qr,l,r,ar[100004],sqr[100000],mv,lg,rg,i,a,j,k;

int main()
{
	scanf("%d",&tst);                               
	while(tst--)                                    
	{
		scanf("%d%d",&num,&qr);
		
		for(i=1;i<=num;i++)
		{
			scanf("%d",&ar[i]);
		}
		int sq=sqrt(num);
		
		for( i=0;i<=num;i++)
		{
			 a=ceil(i/(double)sq);
			sqr[a]=min(sqr[a],ar[i]);
		}
		
		cout<<"Case "<<++cas<<":"<<endl;
		
		for(i=0;i<qr;i++)
		{
			scanf("%d%d",&l,&r);
				mv=999999;
				lg=ceil(l/sq)+1;
				rg=ceil(r/sq)-1;
				
			if(lg>rg)
			{
				for(k=l;k<=r;k++)
				{
					mv=min(mv,ar[k]);
				}
			}
			
			else if(lg<rg)
			{
				for(k=lg;k<=rg;k++)
				{
					mv=min(mv,sqr[k]);
				}
				
				for(k=l;k%sq!=1;k++)
				{
					mv=min(mv,ar[k]);
				}
				
				for( k=r;k%sq!=0;k--)
				{
					mv=min(mv,ar[k]);
				}
			}
			else
			{
				mv=sqr[lg];
			}
			cout<<mv<<endl;
		}
	}

	return 0;
}
