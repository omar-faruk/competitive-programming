#include<bits/stdc++.h>
#define fix 1080
using namespace std;
int main()
{
    int a,b,c,d,ang,ab,bc,cd;
    while(scanf("%d %d %d %d",&a,&b,&c,&d))
    {
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        
        if(a<b)
            ab=(40-b+a)*9;
        else
            ab=(a-b)*9;

        if(b>c)
            bc=(40-b+c)*9;
        else
            bc=(c-b)*9;

        if(c<d)
            cd=(40-d+c)*9;
        else
            cd=(c-d)*9;
        
        
        ang=(ab+bc+cd)+fix;
        
        printf("%d\n",ang);

    }
    return 0;
}
