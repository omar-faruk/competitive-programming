#include<bits/stdc++.h>
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
	int tst,qr,tp,fr,fm,en,hr,val,cas=0;
	scanf("%d",&tst);
	
	getchar();
	
	while(tst--)
	{
		
		scanf("%d%d",&num,&qr);
		
		memset(bit,0,sizeof(bit));
		
		for(int i=1;i<=num;i++)
		{
			scanf("%d",&ar[i]);
			insert(i,ar[i]);
			
		}
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
				
				printf("%d\n",ans);
			}
			else if(tp==2)
			{
				scanf("%d%d",&fm,&hr);
				insert(fm+1,hr);
				ar[fm+1]+=hr;
			}
			else
			{
				scanf("%d%d",&fr,&en);
				int ans=query(en+1)-query(fr);
				printf("%d\n",ans);
			}
		}
	}
	return 0;
}
				
