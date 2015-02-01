#include <bits/stdc++.h>
using namespace std;
int main()
{
	string line;
	int count[300],i,max;
	
	while(getline(cin,line))
	{
		memset(count,0,sizeof count);
		max=0;
		
		for(i=0;i<int(line.size());i++){
			
			if((line[i]>='A' && line[i]<='Z') ||(line[i]>='a' && line[i]<='z')){
				count[int(line[i])]++;
				if(count[int(line[i])]>max) max=count[int(line[i])];
			}
		}
		
		for(i=int('A');i<=int('Z');i++){
			if(count[i]==max) cout<<char(i);
		}
		
		for(i=int('a');i<=int('z');i++){
			if(count[i]==max) cout<<char(i);
		}
		cout<<" "<<max<<endl;
	}
	return 0;
}
