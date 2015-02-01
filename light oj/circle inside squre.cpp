#include<iostream>
#include<math.h>
#include<stdio.h>
#define pi acos(-1)
#define squre 4*r*r
#define circle pi*r*r
#define space squre-circle
using namespace std;
int main()
{
	double r;
	int tc;
	cin>>tc;
	for(int i=1;i<=tc;i++)
	{
		cin>>r;
		printf("Case %d: %.2lf\n",i,space);
	}
	return 0;
}
