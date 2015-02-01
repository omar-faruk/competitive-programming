#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b;
    int t=0;
    double angle,temp;
    
    while(scanf("%lf : %lf",&a,&b)==2)
    {
        angle=atan((double)(b/a));
        
        temp=400/(2*a+2*angle*sqrt(a*a+b*b));
        
        printf("Case %d: %.10lf %.10lf\n",++t,a*temp,b*temp);
    }
return 0;

}
