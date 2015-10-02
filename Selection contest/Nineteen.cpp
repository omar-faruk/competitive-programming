#include<bits/stdc++.h>

using namespace std;

int main()
{
	string nm,cop;
	cop[0]='n';
	cop[1]='i';
	cop[2]='t';
	cop[3]='e';
	map<char, int>mk;
	int mn=99999999;
	cin>>nm;
	int ln=nm.length();
	for(int i=0;i<ln;i++)
	{
		mk[nm[i]]++;
	}
	//sort(mk,mk+mk.size());
	/*for(int i=0;i<ln;i++)
	{
			
		if(nm[i]=='n'||nm[i]=='e')
		{
			mk[nm[i]]=mk[nm[i]]/3;
		}
		cout<<mk[nm[i]]<<' ';
		if(nm[i]=='i'||nm[i]=='t'||nm[i]=='e'||nm[i]=='n')
		{
			if(mk[nm[i]]<mn)
			{
				mn=mk[nm[i]];
			}
		}
		cout<<mn<<' ';
	}
	//cout<<mn<<endl;
	*/
	mk[cop[0]]=mk[cop[0]]/3;
	mk[cop[3]]=mk[cop[3]]/3;
	for(int i=0;i<4;i++)
	{
		if(mk[cop[i]]<mn)
		{
			mn=mk[cop[i]];
		}
		cout<<mn<<' ';
	}
	
	cout<<mn<<endl;
	
	return 0;
}
