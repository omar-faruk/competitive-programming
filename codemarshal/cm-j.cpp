#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,i,cc=1,q,stackNo,value,temp[100000];
	string command;
	cin>>t;
	
	while(t--){
		cin>>n>>q;
		stack<int> s[10010];
		cout<<"Case "<<cc++<<": "<<endl;
		
		for(i=1;i<=q;i++){
			cin>>command;
			
			if(command=="pop"){
				cin>>stackNo;
				if(!s[stackNo].empty()){
					 s[stackNo].pop();
				 }
			}
			
			else if(command=="top"){
				cin>>stackNo;
				if(!s[stackNo].empty()){
					cout<<s[stackNo].top()<<endl;
				}
				else cout<<"Empty!"<<endl;
			}
			
			else if(command=="push"){
				cin>>stackNo>>value;
				s[stackNo].push(value);
			}
			
			else if(command=="put"){
				int x,k,count;
				
				cin>>stackNo>>x;
				if(!s[x].empty()){
					for(k=0;;k++){
						if(s[x].empty()){
							break;
						}
						
						temp[k]=s[x].top();
						s[x].pop();
						
						if(s[x].empty()){
							break;
						}
					}
					
					for(count=k;count>=0;count--){
						s[stackNo].push(temp[count]);
					}
				}
			}
		}
	}
	return 0;
}
