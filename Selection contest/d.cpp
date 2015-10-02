#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <iomanip>
#include <numeric>
#include <iterator>
#include <typeinfo>
#include <valarray>
#include <functional>
#include <cassert>
#include <climits>

using namespace std;
int ar[100009],bit[100009],num;
void insert(int pos,int val)
{
	for(int i=pos;i<=num;i+=(i&-i))
	{
		bit[i]+=val;
	}
}
int query(int pos)
{
	int sum=0;
	for(int i=pos;i>0;i-=(i&-i))
	{
	  sum+=bit[i];
	}
	return sum;
}

int main()
{
	int tst,qr,tp,val,hr,cas=0;
	unsigned fr,fm,en;
	scanf("%d",&tst);
	
	while(tst--)
	{
		
		scanf("%d%d",&num,&qr);
		memset(bit,0,sizeof(bit));
		for(int i=1;i<=num;i++)
		{
			scanf("%d",&ar[i]);
			insert(i,ar[i]);
			
		}
		//cout<<"Case "<<++cas<<":"<<endl;
		printf("Case %d:\n",++cas);
		for(int i=0;i<qr;i++)
		{
			scanf("%d",&tp);
			if(tp==1)
			{
				scanf("%d",&val);
				int ans=ar[val+1];
				insert(val+1, -ans);
				ar[val+1]=0;
				
				//cout<<ans<<endl;
				printf("%d\n",ans);
			}
			else if(tp==2)
			{
				scanf("%d%d",&fm,&hr);
				insert(fm+1,hr);
				ar[fm+1]+=hr;
				//cout<<ar[fm]<<endl;
			}
			else
			{
				scanf("%d%d",&fr,&en);
				int ans=query(en+1)-query(fr);
				//cout<<ans<<endl;
				printf("%d\n",ans);
			}
		}
	}
	return 0;
}
				
