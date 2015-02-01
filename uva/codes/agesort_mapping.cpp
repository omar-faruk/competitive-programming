#include<map>
#include<iostream>
#include<vector>
using namespace std;
long long sorted[2000005];
int main()
{
	map <long long,long long> age;
	long long temp,i,n,s,c,max,min;
	
	while(cin>>n)
	{
		if(n==0) break;
		min=2000005;
		max=0;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			if(min>temp)
			{
				min=temp;
			}
			if(max<temp)
			{
				max=temp;
			}
			age[temp]++;
		}
		i=0;
		while(min<=max)
		{
			if(age[min]>1)
			{
				for(c=1;c<=age[min];c++)
				{
					sorted[i]=min;
					i++;
				}
			}
			else if(age[min]==1) 
			{
				sorted[i]=min;
				i++;
			}
			min++;
		}
		age.clear();
		for(s=0;s<i;s++)
		{
			cout<<sorted[s];
			if(s<i-1) cout<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
