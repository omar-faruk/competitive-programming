#include<bits/stdc++.h>

using namespace std;

bool palindrome(string raw)	 //check palindrome
{
	int i,j;
	
	int l=raw.size();
	
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(raw[i]!=raw[j])
		{
			return false;
			break;
		}
	}
	
	return true;
}

bool self_reverse(string raw)   //check if it is mirrored
{
	int i,j=raw.size();
	
	for(i=0;i<j;i++)
	{
		if(!(raw[i]=='A' || raw[i]=='T' || raw[i]=='Y' || raw[i]=='O' || raw[i]=='W' 
		|| raw[i]=='X' || raw[i]=='I' || raw[i]=='M' || raw[i]=='U' || raw[i]=='V' || raw[i]=='1' || raw[i]=='8'))
		{
			return false;
			break;
		}
	}
	return true;
	
}

int main()
{
	string word;
	
	while(cin>>word)
	{
		cout<<word;
		
		if(palindrome(word))
		{
			if(self_reverse(word))
			{
				cout<<" -- is a mirrored palindrome."<<endl;
			}
			else cout<<" --is a regular palindrome."<<endl;
		}
		
		else if(self_reverse(word)) cout<<" -- is a mirrored string."<<endl;
		
		else cout<<" -- is not a palindrome."<<endl;
		cout<<endl;
	}
	
	return 0;
}
