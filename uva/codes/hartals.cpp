#include<iostream>
#include<cstring>

using namespace std;


int test_case,political_parties,hartal_paramitars[220],days[5000],simulation_days,lost_days,n,i;

int main()
{
	
	cin>>test_case;
	
	while(test_case--)
	{
		cin>>simulation_days>>political_parties;
		
		memset(days,0,sizeof(days));
		
		for(i=0;i<political_parties;i++)
		{
			cin>>hartal_paramitars[i];
		}
		
		
		//simulation starts here
		
		lost_days=0;
		
		for(i=0;i<political_parties;i++)
		{
			for(n=hartal_paramitars[i];n<=simulation_days;n+=hartal_paramitars[i])
			{
				if(n%7==0 || (n+1)%7==0) continue;
				else
				{
					if(days[n]==0) {
						lost_days++;
					}
					days[n]++;
				}
			}
		}
		cout<<lost_days<<endl;
	}
	return 0;
}
