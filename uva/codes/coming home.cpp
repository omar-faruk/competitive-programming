#include<bits/stdc++.h>
#define scan(a) scanf("%d",&a)
#define time_scan(x,y) scanf("%d:%d",&x,&y)

using namespace std;


int ct_hour,ct_min,current_time,bus_arrival,total_buses,ba_hour,ba_min,travel_time,tc,i,n,total_time,ans;

int main()
{
	scan(tc);
	
	for(i=1;i<=tc;i++)
	{
		ans=INFINITY;
		
		scan(total_buses);
		time_scan(ct_hour,ct_min);
		
		current_time=ct_hour*60+ct_min;
		
		for(n=1;n<=total_buses;n++)
		{
			time_scan(ba_hour,ba_min);
			scan(travel_time);
			
			bus_arrival=ba_hour*60+ba_min;
			
			if(bus_arrival<current_time) bus_arrival+=24*60;
			
			total_time=bus_arrival-current_time+travel_time;
			
			
			ans=min(ans,total_time);
			
		}
		printf("Case %d: %d\n",i,ans);
	}

	return 0;
}
