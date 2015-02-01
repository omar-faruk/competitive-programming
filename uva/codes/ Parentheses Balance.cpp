#include<iostream>
#include<string>
#include<stack>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
	stack<char>stack1;
	string s;
	int i,tc,len,flag=1;
	
	cin>>tc;
	getchar();
	while(tc--)
	{
		getline(cin,s);
		len=s.size();
		flag=1;
		
		for(i=0;i<len;i++)
		{
			if(s[i]=='[' || s[i]==']' || s[i]=='(' || s[i]==')')
			{
				if(s[i]=='(' || s[i] =='[')
				{
					stack1.push(s[i]);
				}
				
				if(s[i]==')')
				{
					if(stack1.empty())
					{
						flag=0;
						break;
					}
					if(stack1.top()=='(')
					{
						stack1.pop();
					}
					else {
						flag=0;
						break;
					}
				}
				
				else if(s[i]==']')
				{
					if(stack1.empty())
					{
						flag=0;
						break;
					}
					if(stack1.top()=='[')
					{
						stack1.pop();
					}
					else {
						flag=0;
						break;
					}
				}
			}
			
		}
		
		if(stack1.empty() && flag==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
		while(!stack1.empty()) stack1.pop();
	}
	return 0;
}
