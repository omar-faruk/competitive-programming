#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,e,f;
long long  vis[10001];

int fn(int n)
{
	if(n==0) return a;
	if(n==1) return b;
	if(n==2) return c;
	if(n==3) return d;
	if(n==4) return e;
    if(n==5) return f;
    
    if(vis[n]!=-1) return vis[n]%10000007;
    
    else vis[n]=(fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007;
    
    return vis[n];
}

int main()
{
	int n,caseno=0,cases;
	
	scanf("%d",&cases);
	
	while(cases--)
	{
		memset(vis,-1,sizeof(vis));
		
		cin>>a>>b>>c>>d>>e>>f>>n;
		
		vis[0]=a;
		vis[1]=b;
		vis[2]=c;
		vis[3]=d;
		vis[4]=e;
		vis[5]=f;
		
		printf("Case %d: %d\n",++caseno,fn(n)%10000007);
	}
	
	return 0;
}
