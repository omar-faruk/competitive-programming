#include <bits/stdc++.h>
#define LLU long long unsigned
#define MAX 100000001
using namespace std;

LLU S(LLU x,LLU a)
{
	LLU sum=0,i;
	while(x>0)
	{
		sum+=x%10;
		x/=10;
	}
	
	LLU ans=1;
	
	for(i=1;i<=a;i++)
	{
		ans*=sum;
	}
	return ans;
}

int main()
{
	LLU a,b,c,sol,i;
	LLU solutions[1000000];
	LLU total_solutions=0;
	
	cin>>a>>b>>c;
	for(i=1;i<9000000;i++)
	{
		sol=b*(S(i,a))+c;
		
		if(sol==i){
			 solutions[total_solutions++]=i;
		 }
	}
	
	cout<<total_solutions<<endl;
	
	for(i=0;i<total_solutions;i++)
	{
		cout<<solutions[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}
