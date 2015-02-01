#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

long long dp[110][1000],y[10010],t,n,w,k,x;

long long dd(long long pos, long long rem)
{
    if(pos>=n || rem==0) return 0;
 
    if(dp[pos][rem]!=-1) return dp[pos][rem];
    
    long long low=y[pos]+w;
    
    long long tp=n+1,ln=0;
    
    for(long long j=pos;j<n;j++)
    {
        if(y[j]<=low) ln++;
        else
        {
            tp=j;
            break;
        }
    }
 
    return dp[pos][rem]=max((ln+dd(tp,rem-1)),dd(pos+1,rem));
}


int main()
{
    long long cas=0;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>w>>k;
        for(long long i=0;i<n;i++)
        {
            cin>>x>>y[i];
        }
        sort(y,y+n);
        long long ans=dd(0,k);
        cout<<"Case "<<++cas<<": "<<ans<<endl;
    }
    return 0;
}
