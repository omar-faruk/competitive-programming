#include<bits/stdc++.h>
using namespace std;
int main()
{
	string word;
	long long  size,j,i,c;
	int count[160],alpha[160];
	bool f=false;
	
	while(getline(cin,word))
	{
		memset(count,0,sizeof(count));
		memset(alpha,0,sizeof(alpha));

	
	size=word.size();

	for(i=0;i<size;i++)
	{
		alpha[int(word[i])]++;
	}
	
	for(c=32,j=0;c<=int('z');c++,j++)
	{
		if(alpha[c]>0)
			count[j]=alpha[c];
	}
	
	sort(count,count+j);
	  if (f == false)
            f = true;
        else
            cout << endl;
            
		for(i=0;i<j;i++)
		{
			for(c=int('z');c>=32;c--)
			{
				if(count[i]==alpha[c] && alpha[c]>0)
				{
					cout<<c<<" "<<alpha[c]<<endl;
					alpha[c]=0;
					
				}
			}
		}
	}
	return 0;
}
