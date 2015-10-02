#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <iomanip>
#include <numeric>
#include <iterator>
#include <typeinfo>
#include <valarray>
#include <functional>
#include <cassert>
#include <climits>

using namespace std;
int sum,num;
int func(int n)
{
	int nm=num,rem=0;
	while(nm>0)
	{
		rem+=nm%n;
		nm/=n;
	}
	return rem;
}
int main()
{
	cin>>num;
	for(int i=2;i<num;i++)
	{
		sum+=func(i);
	}
	int val=__gcd(sum,num-2);
	cout<<(sum)/val<<'/'<<(num-2)/val<<endl;
	return 0;
}
