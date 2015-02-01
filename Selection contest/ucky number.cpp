#include<bits/stdc++.h>

using namespace std;

bool lucky( int lu)
{
	int cop=lu;
	int rem=0,c4=0,c7=0;
	while(cop>0)
	{
		rem=cop%10;
		if(rem==4)
		{
			c4++;
		}
		else if(rem==7)
		{
			c7++;
		}
		else
		{
			return false;
		}
		cop=cop/10;
	}
	if(c4==c7) return true;
	return false;
}
int main()
{
	long long num;
	cin>>num;
	int flag=1;
	long long mid,mmid,les=num,hig=9999999999;
	
	/*mmid=(les+hig)/2;
	
	cout<<mmid<<' ';
	
	if(lucky(mmid)==true)
	{
		cout<<mmid<<endl;
		return 0;
	}
	les=mmid+1;
	*/
	while(les<=hig)
	{
		mid=(les+hig)/2;
		
		if(lucky(mid)==true)
		{
			//flag=1;
			cout<<mid<<endl;
			return 0;
		}
		if(flag==1)
		{
			les=mid+1;
		}
	}
	/*hig=mmid+1;
	
	les=num;
	while(les<hig)
	{
		mid=(les+hig)/2;
		
		if(lucky(mid)==true)
		{
			//flag=1;
			cout<<mid<<endl;
			return 0;
		}
	    hig=mid;
	 }
	
	//hig=999999999;
	//les=(hig+num)/2;
	*/
	return 0;
}
		
