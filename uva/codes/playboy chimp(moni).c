#include<stdio.h>

long long chimp[1000000];
int main()
{
    long long tst,qry,Luchu,i,j,k,ans,ans2;

    while(scanf("%lld",&tst)==1)
    {
        for(i=0; i<tst; i++)
        {
            scanf("%lld",&chimp[i]);
        }
        
        scanf("%lld",&qry);
        
        for(i=0; i<qry; i++)
        {
            scanf("%lld",&Luchu);
            ans=0;
            
            for(j=0; j<tst; j++)
            {
                if(Luchu>chimp[j])
                {
                    ans=chimp[j];
                }
                else
                {
                    break;
                }
            }
            
            if(ans==0) printf("X ");
            else printf("%lld ",ans);
            ans2=0;
            for(k=tst-1; k>=0; k--)
            {
                if(Luchu<chimp[k])
                {
                    ans2=chimp[k];
                }
                else
                {
                    break;
                }
            }
            if(ans2==0) printf("X\n");
            else printf("%lld\n",ans2);
        }
    }
    return 0;
}
