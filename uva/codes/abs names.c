#include<stdio.h>
#include<string.h>

int check(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return 1;
    }
    return 0;
}
int main()
{
    int test,i,fl,l1,l2,n;
    char fsrt[1000],snd[1000];

    scanf("%d",&test);
    for(n=1;n<=test;n++)
    {
        scanf("%s",fsrt);
        scanf("%s",snd);
        l1=strlen(fsrt);
        l2=strlen(snd);

        if(l1!=l2)
        {
            printf("No\n");
            continue;
        }
        fl=1;
        for(i=0; i<l1; i++)
        {
            if(!check(fsrt[i]) && !check(fsrt[i]) && fsrt[i]!=snd[i])
            {
                fl=0;
                break;
            }
        }
        if(fl) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
