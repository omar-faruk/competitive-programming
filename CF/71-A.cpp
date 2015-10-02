#include<bits/stdc++.h>
using namespace std;
int main()
{
	char word[100000];
	int tc,size;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%s",word);
		size=strlen(word);
		if(size<=10) cout<<word<<endl;
		else
		cout<<word[0]<<size-2<<word[size-1]<<endl;
	}
	
	return 0;
}
