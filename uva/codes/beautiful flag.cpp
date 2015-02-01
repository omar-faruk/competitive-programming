#include<bits/stdc++.h>

#define x_left length*(0.45)*(-1)
#define x_right length+x_left
#define length (radious*100)/20
#define width length*(0.60)

#define y_up width*(0.5)
#define y_down y_up*(-1)

using namespace std;
int main()
{
	int radious,c,i;
	
	cin>>c;
	for(i=1;i<=c;i++)
	{
		cin>>radious;
		
		printf("Case %d:\n",i);
		
		cout<<x_left<<" "<<y_up<<endl;
		cout<<x_right<<" "<<y_up<<endl;
		cout<<x_right<<" "<<y_down<<endl;
		cout<<x_left<<" "<<y_down<<endl;
	}
	return 0;
}
