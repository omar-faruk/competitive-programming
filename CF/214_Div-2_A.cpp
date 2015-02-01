#include<bits/stdc++.h>
using namespace std;

int main()
{
	int index,min1,min2,a,b,c,d,i,money,m1,m2,possible;
	
	while(cin>>money)
	{
		m1=999999,m2=999999;
		
		possible=0;
		for(i=1;i<=4;i++)
		{
			cin>>a>>b>>c>>d;
			min1=min(a,b);
			min2=min(c,d);
			
			if(min1+min2<=money)
			{
				possible=1;
				
				if(min1<m1 || min2<m2)
				{
					m1=min1;
					m2=min2;
					index=i;
				}
			}
		}
		if(!possible) cout<<-1<<endl;
		else cout<<index<<" "<<m1<<" "<<money-m1<<endl;
	}
}
