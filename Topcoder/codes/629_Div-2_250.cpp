#include <bits/stdc++.h>
using namespace std;
class RectangleCoveringEasy
{
	public:
		int solve(int holeH, int holeW, int boardH, int boardW )
		{
			if((holeH<boardH && holeW<boardW)||(holeH<boardW && holeW<boardH))
			{
				return 1;
			}
			else if((holeH<=boardH && holeW<boardW)||(holeH<=boardW && holeW<boardH))
			{
				return 1;
			}
			else if((holeH<boardH && holeW<=boardW)||(holeH<boardW && holeW<=boardH))
			{
				return 1;
			}
			else return -1;
		}
};

int main()
{
	RectangleCoveringEasy r;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	cout<<r.solve(a,b,c,d);
	main();
	return 0;
}
