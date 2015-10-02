#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>

#define scan(X,Y) scanf("%ld %ld",&X,&Y)
#define for_(x) for(int I=0;I<x;I++)
#define for_testcase(TC) for(int N=1;N<=TC;N++)

using namespace std;

int main()
{
	int tc,total_points,brush_width;
	long x,y[50000];
	cin>>tc;								//scan test_case
	for_testcase(tc)						
	{
		cin>>total_points>>brush_width;   	//scan total dust_points and brush_width
		
		for_(total_points)
		{
			scan(x,y[I]);					//scan the x and y co-ordinates
		}
		
		sort(y,y+total_points);				//sorting the y co-ordinates only
		
		int temp,moves=1;
		
		temp=y[0]+brush_width;
		
		for(int i=1;i<total_points;i++)
		{
			if(temp<y[i]) 
			{
				moves++;
				temp=y[i]+brush_width;		//if the co-ordinate can not be removed change the brush position to next point
			}
			
		}
		printf("Case %d: %d\n",N,moves);
		
	}
	return 0;
}
