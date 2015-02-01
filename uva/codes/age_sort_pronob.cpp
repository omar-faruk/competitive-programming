#include<stdio.h>
int a[2000010],left[1000010],right[1000010];

void merge(int st,int mid,int ed)
{
    int lp=0,rp=0;
    for(int k=st;k<=mid;k++)
    {
        left[lp]=a[k];
        lp++;
    }
    left[lp]=101;
    for(int k=mid+1;k<=ed;k++)
    {
        right[rp]=a[k];
        rp++;
    }
    right[rp]=101;
    int i=0,j=0;
    for(int k=st;k<=ed;k++)
    {
        if(left[i]<right[j])
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }
    }
    return;
}
void mergesort(int st,int ed)
{
    int mid=(st+ed)/2;
    if(st==ed)return;
    mergesort(st,mid);
    mergesort(mid+1,ed);
    merge(st,mid,ed);
    return;
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        mergesort(0,n-1);
        for(int i=0;i<n;i++)
        {
            printf("%d",a[i]);
            if(i==n-1)printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
