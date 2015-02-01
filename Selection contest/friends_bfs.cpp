#include<bits/stdc++.h>

using namespace std;
vector<int >adj[30001];
int visit[30001];
int cnt;
void bfs(int pos)
{
	int tmp,mk;
	queue<int>Q;
	Q.push(pos);
	visit[pos]=1;
	while(!Q.empty())
	{
		mk=Q.front();
		Q.pop();
		for(int i=0;i<adj[mk].size();i++)
		{
			tmp=adj[mk][i];
			if(visit[tmp]==0) 
			{
				cnt++;
				visit[tmp]=1;
				Q.push(tmp);
			}
		}
	}
}
int main()
{
	int tst,mx,num,pair,x,y;
	cin>>tst;
	while(tst--)
	{
		mx=0;
		//memset(visit,0,sizeof(visit));
		cin>>num>>pair;
		for(int i=0;i<num;i++)
		{
			adj[i].clear();
			visit[i]=0;
		}
		for(int i=0;i<pair;i++)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=0;i<num;i++)
		{
			if(visit[i]==0)
			{
				cnt=1;
				bfs(i);
				mx=max(mx,cnt);
			}
		}
		cout<<mx<<endl;
	}
	return 0;
}

