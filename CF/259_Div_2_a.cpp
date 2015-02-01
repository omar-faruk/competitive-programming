#include <bits/stdc++.h>
using namespace std;
int main()
{
	int size,i,j;
	
	cin>>size;
	
	for(i=1;i<=size/2+1;i++)
	{
		for(j=1;j<=(size-(i*2)-1)/2+1;j++){
			cout<<'*';
		}
		
		for(j=1;j<=(i*2)-1;j++){
			cout<<'D';
		}
		
		for(j=1;j<=(size-(i*2)-1)/2+1;j++){
			cout<<'*';
		}
		cout<<endl;
		
	}
	
	for(i=(size/2);i>0;i--)
	{
		for(j=1;j<=(size-(i*2)-1)/2+1;j++){
			cout<<'*';
		}
		
		for(j=1;j<=(i*2)-1;j++){
			cout<<'D';
		}
		
		for(j=1;j<=(size-(i*2)-1)/2+1;j++){
			cout<<'*';
		}
		cout<<endl;
		
	}

	return 0;
}
