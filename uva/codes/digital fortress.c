#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n,count,len,s,tc;
	double sq;

	char word[14000];

	scanf("%d",&tc);
	getchar();

	while(tc--)
	{
		gets(word);

		len=strlen(word);

		sq=sqrt(len);
		s=sq;

		if(sq-s!=0)
		{
			printf("INVALID");
		}

    else{
            for(n=0;n<s;n++)
            {
                for(count=n;count<len;count=count+s)
                {
                    printf("%c",word[count]);
                }
            }
        }
        printf("\n");

	}
	return 0;
}
