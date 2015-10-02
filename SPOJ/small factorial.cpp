#include<stdio.h>
#include<string.h>

char buffer[300]={'0'},ans[300];

struct factorial{
	char fact[300];
	} nth[300];
	
void reverse(char string[])
{
	int I,J,LEN;
	char temp;
	LEN=strlen(string)-1;
	
	for(I=0,J=LEN;I<J;I++,J--)
	{
		temp=string[I];
		string[I]=string[J];
		string[J]=temp;
		
	}
	return ;
}
	
void string_multiply(char numb[], int a)
{
	int result,len,i,carry;
	
	reverse(numb);
	len=strlen(numb);
	
	carry=0;
	for(i=0;i<len;i++)
	{
		result=((numb[i]-'0')*a)+carry;
		buffer[i]=(result%10)+'0';
		
		carry=0;
		if(result>9)
		{
			carry=result/10;
		}
	}
	
	if(carry>0)
	{
		up:;
		buffer[i]=(carry%10)+'0';
		carry=carry/10;
	}
	if(carry>0)
	{
		i++;
		goto up;
	}
	
	reverse(buffer);
	strcpy(nth[a].fact,buffer);
	
	return ;
}

int main()
{
	long long unsigned z,y,used[45678]={0},tc;
    char A[55555],D[]={'1','\0'},E[]={'2','\0'};

    strcpy(nth[0].fact,D);
    strcpy(nth[1].fact,D);
    strcpy(nth[2].fact,E);

    used[0]=2;
    used[1]=2;
	
	scanf("%llu",&tc);
    while(tc--)
    {
		scanf("%llu",&z);
        if(strlen(nth[z].fact)>0)
        {
            goto skip;
        }
        else
        {
            for(y=2;y<=z;y++)
            {
                if(!used[y])
                {
                strcpy(A,nth[y-1].fact);
                string_multiply(A,y);
                }
                used[y]=2;
            }
        }
        skip:;
        puts(nth[z].fact);
    }
	return 0;
}
