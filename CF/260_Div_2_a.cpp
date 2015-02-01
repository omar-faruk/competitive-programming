#include <iostream>
using namespace std;

struct laptop{
	int price;
	int quality;
}l[100010];

int main()
{
	int n,i;
	
	bool found;
	
	cin>>n;
	found=false;
	for(i=1;i<=n;i++)
	{
		cin>>l[i].price>>l[i].quality;
	}
	
	for(i=2;i<=n;i++){
		if(l[i].price>l[i-1].price && l[i].quality<l[i-1].quality)
		{
			found=true;
		}
	}
	
	if(found) cout<<"Happy Alex"<<endl;
	else cout<<"Poor Alex";
	
	
	return 0;
}
