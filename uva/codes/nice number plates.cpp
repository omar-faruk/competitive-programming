#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	int n,d,i,tc;
	
	scanf("%d",&tc);
	
	while(tc--)
	{
		scanf("%[^-]-%d",s,&d);
		
		i=(s[1]-65)*(26*26)+(s[2]-65)*(26)+(s[3]-65);
		
		n=abs(d-i);
		
		if(n<=100) puts("nice");
		else puts("not nice");
	}
	return 0;
}
