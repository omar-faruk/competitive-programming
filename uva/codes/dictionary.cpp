#include<bits/stdc++.h>
using namespace std;

string word[150000];
char s[1500000];

int main()
{
	map<string,int> dictionary;
	map<string,int>::iterator it;
	
	int i,n,len,total_words;
	char ch;
	
	i=0;
	while((ch=getchar())!=EOF)
	{
		s[i]=ch;
		i++;
	}
	s[i]='\0';
	
	len=strlen(s);
	n=0;
	for(i=0;i<len;i++)
	{
		s[i]=tolower(s[i]);
		
		if(s[i]>='a' && s[i]<='z')
		{
			word[n]=word[n]+s[i];
		}
		if(!(s[i]>='a' && s[i]<='z'))
		{
			if(word[n].size()!=0)
			{
				//dictionary[word[n]]++;   //its used for map iterator count
				n++;
			}
		}
	}
	total_words=n;
	
	sort(word,word+total_words);
	
	for(i=0;i<total_words;i++)
	{	
		if(dictionary[word[i]]==0)
		{
			dictionary[word[i]]++;
			
			if(word[i]=="") continue;
			cout<<word[i]<<endl;
		}
	}
	
	//its used for map iterator output
	
	/*for (map<string,int>::iterator it=dictionary.begin(); it!=dictionary.end(); it++)
	{
		cout<<it->first<<endl;
	}*/
	
	return 0;
}
