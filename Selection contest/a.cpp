#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<deque>
#include<fstream>
#include<iostream>
#include<list>
#include<map>
#include<memory>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	long long num;
	while(cin>>num)
	{
		int rem=num%10;
		if(rem==0) cout<<"2"<<endl;
		else
		{
			cout<<"1"<<endl;
			cout<<rem<<endl;
		}
	}
	return 0;
}
