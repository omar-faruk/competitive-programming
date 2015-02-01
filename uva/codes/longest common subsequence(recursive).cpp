#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int l1,l2;
int grid[1010][1010];

int lcs(int pos1,int pos2)
{
	if(pos1>=l1 || pos2>=l2) return 0;
	
	if(grid[pos1][pos2]!=-1) return grid[pos1][pos2];
	
	if(s1[pos1]==s2[pos2])
	{
		return grid[pos1][pos2]=1+lcs(pos1+1,pos2+1);
	}
	
	return grid[pos1][pos2]=max(lcs(pos1+1,pos2),lcs(pos1,pos2+1));
}

int main()
{
	while(getline(cin,s1))
	{
		getline(cin,s2);
		
		l1=s1.size();
		l2=s2.size();
		
		memset(grid,-1,sizeof(grid));
		
		cout<<lcs(0,0)<<endl;
	}
	return 0;
}
