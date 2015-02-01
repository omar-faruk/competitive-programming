#include<stdio.h>
int main()
{
    int cy,y,chk[10],true,i,j;
    while(scanf("%d",&y)!=EOF)
    {

        top:;
            y=y+1;
            cy=y;

            for(i=0;i<4;i++)
            {
                chk[i]=cy%10;
                cy=cy/10;
            }

            true=1;
            for(i=0;i<4;i++)
            {
                for(j=i+1;j<4;j++)
                {
                    if(chk[i]==chk[j])
                    {
                        true=0;
                        goto top;
                        break;
                    }
                }
            }
        if(true) printf("%d\n",y);
    }
    return 0;
}
