#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,temp;
	int la,lb,len1,len2,i,j,count[10000],n;
	
	while(getline(cin,a)!=NULL && getline(cin,b)!=NULL)
	{
		
		la=a.size();
		lb=b.size();
		len1=la;
		len2=lb;
		
		if(la>lb)
		{
			len1=lb;
			len2=la;
			temp=a;
			a=b;
			b=temp;
		}
		
		n=0;
		for(i=0;i<len1;i++)
		{
			for(j=0;j<len2;j++)
			{
				if(isalpha(a[i]) && isalpha(b[j]) && (a[i]>'Z' && b[j]>'Z'))
				{
					if(a[i]==b[j])
					{
						count[n]=int(a[i]);
						b[j]='@';
						n++;
						break;
					}
				}
			}
		}
		sort(count,count+n);
		for(i=0;i<n;i++)
		{
			printf("%c",char(count[i]));
		}
		printf("\n");
	}
	return 0;
}
