#include<iostream>
#include<cstdio>
#include<math.h>

#define pi acos(-1)
#define s (AB+BC+AC)/2

#define AB (r1+r2)
#define AC (r1+r3)
#define BC (r2+r3)

#define A acos(((AC*AC)+(AB*AB)-(BC*BC))/(2*AB*AC))
#define B acos(((BC*BC)+(AB*AB)-(AC*AC))/(2*AB*BC))
#define C acos(((AC*AC)+(BC*BC)-(AB*AB))/(2*BC*AC))

#define sector1 ((r1*r1)*(A/2))
#define sector2 ((r2*r2)*(B/2))
#define sector3 ((r3*r3)*(C/2))

#define ABC sqrt(s*(s-AB)*(s-AC)*(s-BC))
#define agent_area (ABC-(sector1+sector2+sector3))

using namespace std;

int main()
{
	double r1,r2,r3;
	int test_case;

	scanf("%d",&test_case);

	for(int i=1;i<=test_case;i++)
	{
		scanf("%lf %lf %lf",&r1,&r2,&r3);

		printf("%.6lf\n",agent_area);
	}

	return 0;
}
