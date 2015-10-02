#include<stdio.h>
#include<math.h>
#define print(x) printf("%.2lf\n",x)
int main()
{
	double a,ratio,m;
	
	while(scanf("%lf",&a))
	{
		m=(a*a-3*a)/2;
		ratio=m/a;
		print(m);
		print(ratio);

	}

	return 0;
}
