#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,count,letter;
    char sen[10000];
    while(gets(sen)!=NULL)
    {
        len=strlen(sen);

        count=0;
        letter=0;
        for(i=0;i<len;i++)
        {
            if((sen[i]>='A' && sen[i]<='Z') || (sen[i]>='a' && sen[i]<='z'))
            {
                letter=1;
            }
            if(!((sen[i]>='A' && sen[i]<='Z') || (sen[i]>='a' && sen[i]<='z')))
            {
                if(letter)
                {
                    count++;
                    letter=0;
                }
            }
        }
        if(letter)
            {
                count++;
            }
        printf("%d\n",count);

    }
    return 0;
}
