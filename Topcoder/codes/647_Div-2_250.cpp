#include <bits/stdc++.h>
using namespace std;
class PeacefulLine{
	public:
	string makeLine(vector <int> v){
		
		int distinctItems=0,i,max=-1,max_index=0;
		int counter[30];
		
		memset(counter,0,sizeof counter);
		
		for(i=0;i<int(v.size());i++){
			if(counter[v[i]]==0) {
				distinctItems++;
			}
			counter[v[i]]++;
			if(counter[v[i]]>max){
				max=counter[v[i]];
				max_index=v[i];
			}
		}
		
		for(i=0;i<30;i++){
			if(i==max_index){
				continue;
			}
			max-=counter[i];
		}
		if(max>1)return "impossible";
		else return "possible";
	}
};
int main()
{
	
	return 0;
}
