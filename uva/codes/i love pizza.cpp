#include<bits/stdc++.h>
#define len(str) strlen(str)
#define min_i(num) minimum_ingredient(num)
using namespace std;

bool item(char it)
{
	if(it=='M' || it=='A' || it=='R' || it=='G' || it=='I' || it=='T')
			{
				return true;
			}
	return false;
}

int minimum_ingredient(int c)
{
	if(c==int('A')) return 3;
	if(c==int('R')) return 2;
	else return 1;

}

int main()
{
	int i,tc,count[92];
	char mtrls[1000];
	
	cin>>tc;
	
	while(tc--)
	{		
		cin>>mtrls;
		int size=len(mtrls);
		memset(count,0,sizeof(count));

		for(i=0;i<size;i++)
		{
			if(item(mtrls[i]))
			{
				if(count[int(mtrls[i])]!=0)
				{
					count[int(mtrls[i])]++;
				}
				else count[int(mtrls[i])]=1;
			}
		}
		
		int min=10000000;
		
		for(i=60;i<90;i++)
		{	
			if(item(i))
				{
					count[i]=count[i]/min_i(i);
					if(min>count[i]) min=count[i];
				}
		}
		cout<<min<<endl;
	}
	
	return 0;
}
