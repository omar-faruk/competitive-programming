#include <bits/stdc++.h>
#define slu(data) scanf("%llu",&data)
#define slu2(a,b) scanf("%llu %llu",&a,&b)
using namespace std;
int main()
{
	long long unsigned test_case,n,i,time[1000090],free_time,profit,max_profit;
	
	slu(test_case);
	
	while(test_case--){
		max_profit=0;
		slu2(n,free_time);
		
		for(i=0;i<n;i++){
			slu(time[i]);
		}
		
		for(i=0;i<n;i++){
			slu(profit);
				max_profit=max(max_profit,profit*(free_time/time[i]));
		}
		printf("%llu\n",max_profit);
	}
	
	
	return 0;
}
