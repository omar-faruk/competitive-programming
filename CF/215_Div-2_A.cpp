#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int hooks,fine,a[10500],m,i,income,fines,ol,profit;
    
    while(cin>>hooks>>fine)
    {
        income=0;
        for(i=0;i<hooks;i++)
        {
            cin>>a[i];
        }
        cin>>m;

        sort(a,a+hooks);
        
        for(i=0;i<m;i++)
        {
			income+=a[i];
		}
		
        ol=0;fines=0;
        
        if(m>hooks)
        {
            ol=m-hooks;
            fines=ol*fine;
        }
        
        profit=income-fines;
        
        cout<<profit<<endl;
        
    }
    return 0;
}
