#include<bits/stdc++.h>
using namespace std;
int main()
{
	string word,temp;
	long long  n,size,j,i;
	int count[160],alpha[160];
	char c;
	
	scanf("%lld ",&n);
	
	memset(count,0,sizeof(count));
	memset(alpha,0,sizeof(alpha));
	
	while(n--)
	{
		getline(cin,temp);
		word+=temp;
	}
	
	size=word.size();

	for(i=0;i<size;i++)
	{
		if(isalpha(word[i]))
		{
			word[i]=toupper(word[i]);
			
			alpha[int(word[i])]++;
		}
	}
	
	for(c='A',j=0;c<='Z';c++,j++)
	{
		if(alpha[int(c)]>0)
			count[j]=alpha[int(c)];
	}
	
	sort(count,count+j);
	
	for(i=j-1;i>=0;i--)
	{
		for(c='A';c<='Z';c++)
		{
			if(count[i]==alpha[int(c)] && alpha[int(c)]>0)
			{
				cout<<c<<" "<<alpha[int(c)]<<endl;
				alpha[int(c)]=0;
				
			}
		}
	}
	return 0;
}
