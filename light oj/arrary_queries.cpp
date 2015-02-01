#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>

#define scan(n) scanf("%d",&n)
#define scan2(a,b) scanf("%d %d",&a,&b)

using namespace std;

int n,tree[300100],array[400100],Q,i,tc,I,N,start,end;


//idx=index , st=starting_range, ed=ending_range 
//pos=node_position, val=value

void insert(int idx,int st,int ed,int pos,int val)  
{
	if(st==ed) {
		tree[idx]=val;
		return;
	}
	
	int mid=(st+ed)/2;
	int l=2*idx;
	int r=2*idx+1;
	
	if(pos<=mid) insert(l,st,mid,pos,val);
	else insert(r,mid+1,ed,pos,val);
	
	tree[idx]=min(tree[l],tree[r]);
}

int query(int idx,int st, int ed,int x,int y)
{
	if(st==x && ed==y) return tree[idx];
	
	int mid=(st+ed)/2;
	int l=2*idx;
	int r=2*idx+1;
	
	if(y<=mid) return query(l,st,mid,x,y);
	
	else if(x>mid) return query(r,mid+1,ed,x,y);
	
	int ret1=query(l,st,mid,x,mid);
	
	int ret2=query(r,mid+1,ed,mid+1,y);
	
	return min(ret1,ret2);
	
}

int main()
{
	scan(tc);
	
	for(I=1;I<=tc;I++)
	{
		scan2(N,Q);
		
		for(i=1;i<=N;i++)
		{
			scan(array[i]);
			
			insert(1,1,N,i,array[i]);
		}
		
		printf("Case %d:\n",I);
		for(i=1;i<=Q;i++)
		{
			scan2(start,end);
			
			printf("%d\n",query(1,1,N,start,end));
		}
		
	}
	return 0;
}
