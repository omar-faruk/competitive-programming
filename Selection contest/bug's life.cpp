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
long long cnt[100000];
long long ar[10000],br[10000],n,i,k,t,pr,flag,a,b;
int main()
{
    
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n>>pr;
        for(i=0;i<pr;i++)
        {
            cin>>ar[i]>>br[i];
        }
        flag=0;
        for(i=0;i<pr;i++)
        {
            a=ar[i]; b=br[i];
            if(cnt[a]!=0 && cnt[b]==0)
            {
                if(cnt[a]==1) {cnt[b]=2;}
                else if(cnt[a]==2) {cnt[b]=1;}
            }
           else if(cnt[b]!=0 && cnt[a]==0)
            {
                if(cnt[b]==1) {cnt[a]=2;}
                else if(cnt[b]==2) {cnt[a]=1;}
            }
            else if(cnt[b]!=0 && cnt[a]!=0)
            {
                if(cnt[b]==cnt[a]) {flag=1;break;}
            }
            else{cnt[a]=1; cnt[b]=2;}
        }
        /*for(i=0;i<n;i++)
        {
            cout<<cnt[i]<<" ";
        }*/
		cout<<"Scenario #"<<k<<":"<<endl;
        if(flag==1) {cout<<"Suspicious bugs found!\n";}
        else {cout<<"No suspicious bugs found!\n";}
    }
    return 0;
}
