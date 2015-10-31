#include <bits/stdc++.h>

#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)
#define MAX 299999

using namespace std;
int main(int argc, char *argv[])
{
	int arr[MAX];
	int n,i,count,test_case,count_subarrays;

	cin>>test_case;

	while(test_case--){
		cin>>n;
		
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		count_subarrays=0;
		count =1;
		for(i=1;i<n;i++){
			if(arr[i-1]<arr[i]){
				count++;
			}
			else{
				count_subarrays+=(count*(count+1))/2;
				count=1;
			}
		}
		count_subarrays+=(count*(count+1))/2;
		cout<<count_subarrays<<endl;
	}

	return 0;
}
