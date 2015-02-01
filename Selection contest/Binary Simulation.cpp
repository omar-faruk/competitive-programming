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
int bit[100009],ar[100009],num;
void insert(int pos,int val)
{
    for(int i=pos;i<=num;i+=(i&-i))
    {
        for(int i=pos;i<=num;i+=(i&-i))
		{
			bit[i]+=val;
		}
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
void update(int x,int y)
{
	insert(x,1);
	insert(y+1,-1);
}
int main()
{
    int tst,qr,fm,hr,val,cas=0;
    scanf("%d",&tst);
    string nm;
    char ch;
    //getchar();
    while(tst--)
    {
		getchar();
        cin>>nm;
        scanf("%d",&qr);
        num=nm.size();
        memset(bit,0,sizeof(bit));
        for(int i=1;i<=num;i++)
        {
            ar[i]=nm[i-1]-'0';
            
        }
        printf("Case %d:\n",++cas);
        //getchar();
        for(int i=0;i<qr;i++)
        {
			getchar();
            scanf("%c",&ch);
            if(ch=='Q')
            {
                scanf("%d",&val);
                printf("%d\n",ar[val]^query(val));
            }
            //if(ch=='I')
            else
            {
                scanf("%d%d",&fm,&hr);
                update(fm, hr);
             //   cout<<bit[fm]<<' '<<bit[hr]<<endl;
            }
            
        }
    }
    return 0;
}
                
