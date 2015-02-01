#include<bits/stdc++.h>

using namespace std;

int main()
{
	double num,ar,sum=0;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>ar;
		sum+=ar;
	}
	printf("%.10lf\n",sum/num);
	
	//main();
	return 0;
}
