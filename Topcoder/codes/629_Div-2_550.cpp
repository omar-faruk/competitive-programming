#include <bits/stdc++.h>
using namespace std;
class CandyMaking
{
	public:
		double findSuitableDensity(vector <int> containerVolume, vector <int> desiredWeight)
		{
			double density_sum=0.0,sum_of_density=0.0,average_density,sum_of_weight=0.0;
			int i;
			
			for(i=0;i<containerVolume.size();i++)
			{
				sum_of_density+=containerVolume[i];
				
				sum_of_weight+=desiredWeight[i];
				
				density_sum+=desiredWeight[i]/containerVolume[i];
			}
			
			average_density=density_sum/containerVolume.size();
			
			double total=average_density*sum_of_density;
			
			return abs(total-sum_of_weight);
			
			
		}
};

int main()
{
	vector<int>v1,v2;
	CandyMaking c;
	int i,n,v,w;
	cin>>n;
	v1.clear();
	v2.clear();
	for(i=0;i<n;i++)
	{
		cin>>v>>w;
		v1.push_back(v);
		v2.push_back(w);
	}
	cout<<c.findSuitableDensity(v1,v2)<<endl;
	main();
	return 0;
}
