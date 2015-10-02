#include<bits/stdc++.h>
using namespace std;

map<string,string>ir_word;

bool is_vowel(char c)
{
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
	return false;
}

string plural_word(string word)
{
	int len;
	
	len=word.size();
	
	if(word[len-1]=='y' && !is_vowel(word[len-2]) )
	{
		word[len-1]='i';
		word=word+"es";
	}
	
	else if(word[len-1]=='s' || word[len-1]=='o' || word[len-1]=='x')
	{
		word=word+"es";
	}
	else if(word[len-1]=='h' && (word[len-2]=='c' || word[len-2]=='s'))
	{
		word=word+"es";
	}
	
	else word=word+'s';
	
	return word;   
}

int main()
{
	string word,plural;
	
	int ir,i,n;
	
	while(cin>>ir>>n)
	{
		for(i=1;i<=ir;i++)
		{
			cin>>word;
			cin>>plural;
			
			ir_word[word]=plural;
		}
		for(i=1;i<=n;i++)
		{
			cin>>word;
			
			if(ir_word[word].size()) cout<<ir_word[word]<<endl;
			
			else cout<<plural_word(word)<<endl;
		}
		ir_word.clear();
	}
	return 0;
}
