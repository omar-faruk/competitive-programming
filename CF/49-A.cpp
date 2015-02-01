#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char a)
{
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y')
		return true;
	return false;
}

int main()
{
	char sentence[10000],corrected[10000];
	
	while(gets(sentence)!=NULL)
	{
		int size=strlen(sentence)-1;
		
		int n=0;
		for(int i=0;i<=size;i++)
		{
			sentence[i]=tolower(sentence[i]);
			
			if(sentence[i]>='a' && sentence[i]<='z')
			{
				corrected[n]=sentence[i];
				n++;
			}
		}
		corrected[n]='\0';
		
		if(is_vowel(corrected[n-1])) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}
