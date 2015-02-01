#include <bits/stdc++.h>
#define scan(a) scanf("%lld",&a)
#define LL long long int 

using namespace std;

LL t,n,value,i,sum;

priority_queue<LL>pq;
stack <LL>s;

int main()
{
	
	scan(t);
	
	while(t--)
	{
		scan(n);
		
		for(i=0;i<n;i++){
			scan(value);
			pq.push(value);
		}
		sum=0;
		while(!pq.empty()){
			
			value=pq.top();
			pq.pop();
			
			if(s.empty()){
				s.push(value);
				if(sum==0){
					sum++;
				}
			}
			else if(value<s.top()){
				s.pop();
				s.push(value);
			}
			else if(value==s.top()){
				s.pop();
				sum++;
			}
		}
		cout<<endl;
		cout<<s.size()+sum<<endl;

	}
	return 0;
}
