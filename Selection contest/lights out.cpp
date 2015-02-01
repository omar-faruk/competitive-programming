#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3;
	char x1='0',x2='0',x3='0',y1='0',y2='0',y3='0',z1='0',z2='0',z3='0';
	if((a1+a2+b1)%2==0)
	{
		x1='1';
	}
	if((a1+a2+a3+b2)%2==0)
	{
		x2='1';
	}
	if((a2+a3+b3)%2==0)
	{
		x3='1';
	}
	if((a1+b2+b1+c1)%2==0)
	{
		y1='1';
	}
	if((b1+a2+c2+b2+b3)%2==0)
	{
		y2='1';
	}
	if((b2+b3+a3+c3)%2==0)
	{
		y3='1';
	}
	if((c2+b1+c1)%2==0)
	{
		z1='1';
	}
	if((c1+c2+b2+c3)%2==0)
	{
		z2='1';
	}
	if((c2+b3+c3)%2==0)
	{
		z3='1';
	}
	cout<<x1<<x2<<x3<<endl;
	cout<<y1<<y2<<y3<<endl;
	cout<<z1<<z2<<z3<<endl;
	
	//main();
	
	return 0;
}
