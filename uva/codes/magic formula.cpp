#include<iostream>
#include<math.h>
#include<cstdio>
#define fx (a*(x*x)+b*x+c)
#define divisible (fx%d)
using namespace std;
int main()
{
	long long a,b,c,d,l,count,x;
	
	while(cin>>a>>b>>c>>d>>l)
	{
		if(!a && !b && !c && !d && !l) break;
		
		count=0;
		for(x=0;x<=l;x++)
		{
			if(divisible==0) count++;
		}
		cout<<count<<endl;
	}
	
	return 0;
}
