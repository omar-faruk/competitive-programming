#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a[4],b,c,h;
	cin>>h;
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	int cnt=0;
	while(a[2]<h)
	{
		h-a[0];
		cnt++;
	}
	while(a[1]<h)
	{
		h-a[2];
		cnt++;
	}
