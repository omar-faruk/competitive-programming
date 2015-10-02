#include<bits/stdc++.h>
#include<algorithm>

#define max_3(X,Y,Z) max(Z,max(X,Y))
#define min_3(X,Y,Z) min(Z,min(X,Y))
#define total B+G+C

using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int b1[4],b2[4],b3[4],B,C,G,max1,max2;
	
	while(cin>>b1[0]>>b1[1]>>b1[2]>>b2[0]>>b2[1]>>b2[2]>>b3[0]>>b3[1]>>b3[2])
	{
		B=b1[0]+b2[0]+b3[0];
		G=b1[1]+b2[1]+b3[1];
		C=b1[2]+b2[2]+b3[2];
		
		max1=max_3(B,G,C);
		
		max2=total-max1-min_3(B,G,C);
		
		cout<<max2<<" "<<max1<<endl;
		swap(max2,max1);
		cout<<max2<<" "<<max1<<endl;
		
		
	}
	
	return 0;
}
