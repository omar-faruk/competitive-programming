#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,result,ans,count=0;
	char c,r[10];
	
	while(scanf("%d%c%d=%s",&a,&c,&b,r)!=EOF)
	{
		if(strcmp(r,"?"))
		{
			ans=atoi(r);
		}
		if(c=='+') result=a+b;
		if(c=='-') result=a-b;
		if(result==ans) count++;
	}
	cout<<count<<endl;
	
	return 0;
}
