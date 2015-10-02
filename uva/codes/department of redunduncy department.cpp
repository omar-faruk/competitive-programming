#include<bits/stdc++.h>
using namespace std;
int n[9000000];

int main()
{
	map<int,int>m;
	map<int,int>check;
	
	int i,temp,total;
	
	while(scanf("%d",&temp)!=EOF)
	{
		n[i++]=temp;
		m[temp]++;
	}
	
	total=i;
	
	for(i=0;i<total;i++)
	{
		if(check[n[i]]==0)
		{
			check[n[i]]++;
			cout<<n[i]<<" "<<m[n[i]]<<endl;
		}
	}
	return 0;
}
