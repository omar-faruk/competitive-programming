#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

class TaroGrid{
	public:
	 int getNumber(vector<string> grid){
		
		int len=grid.size();
		int i,j,m=1;
		int mygrid[60][60];
		string s;
		memset(mygrid,1,sizeof(mygrid));
		
		for(i=0;i<len;i++)
		{
			for(j=0;j<grid[i].size();j++)
			{
				if(i==0){
					mygrid[i][j]=1;
				}
				if(i!=0)
				{
					if(grid[i-1][j]==grid[i][j]){
						mygrid[i][j]=mygrid[i-1][j]+1;
						m=max(m,mygrid[i][j]);
					}
					else mygrid[i][j]=1;
				}
			}
		}
		return m;
	}
};
int main()
{
	vector<string> v;
	string s;
	int n;
	TaroGrid r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		v.push_back(s);
	}
	cout<<r.getNumber(v)<<endl;
	main();
	
	return 0;
}







