#include <bits/stdc++.h>
using namespace std;

int grid[1011][1011];

int main()
{
	string s1,s2;
	int i,l1,l2,j;
	
	while(getline(cin,s1))
	{
		getline(cin,s2);
		
		l1=s1.size();
		l2=s2.size();
		
		for(i=0;i<=l1;i++)
		{
			for(j=0;j<=l2;j++)
			{
				if(s1[i]==s2[j])
				{
					grid[i+1][j+1]=grid[i][j]+1;
				}
				else 
				{
					grid[i+1][j+1]=max(grid[i+1][j],grid[i][j+1]);
				}
			}
		}
		cout<<grid[l1][l2]<<endl;
		
		memset(grid,0,sizeof(grid));
	}
	return 0;
}
