#include<bits/stdc++.h>
using namespace std;

int main()
{
	string sub[5000],due;
	int day[5000],i,tc,days,Time,subjects,Case;
	
	cin>>tc;
	
	for(Case=1;Case<=tc;Case++)
	{
		cin>>subjects;
		for(i=0;i<subjects;i++)
		{
			cin>>sub[i]>>day[i];
		}
		cin>>days>>due;
		
		Time=-1;
		
		for(i=0;i<subjects;i++)
		{
			if(sub[i]==due)
			{
				Time=day[i];
			}
		}
		printf("Case %d: ",Case);
		
		if(Time>days+5 || Time==-1) printf("Do your own homework!\n");
		else if(Time<=days) printf("Yesss\n");
		else printf("Late\n");
	}
	return 0;
}
