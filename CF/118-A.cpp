#include<bits/stdc++.h>
using namespace std;
bool vowel(char c)
{
	
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
	{
		return true;
	}
	return false;
}

int main()
{
	string word;
	int length,i;
	
	while(cin>>word)
	{
		length=word.size();
		for(i=0;i<length;i++)
		{
			word[i]=tolower(word[i]);
			
			if(!vowel(word[i]))
			{
				cout<<"."<<word[i];
			}	
		}
		cout<<endl;
	}
	return 0;
}
