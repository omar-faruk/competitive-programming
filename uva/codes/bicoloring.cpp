#include<bits/stdc++.h>
#define pb(x) push_back(x)
#define Clear(a) memset(a,0,sizeof(a))

using namespace std;

int number_of_nodes,number_of_edges,i,n,node1,node2;
int visited[210],color[210];

vector<int>v[210];

bool bfs(int start)
{
	queue<int>Q;
	int node;
	
	Q.push(start);
	
	while(!Q.empty())
		{
			node=Q.front();
			
			for(i=0;i<int(v[node].size());i++)   //how many nodes are connected with v[node] th node
			{
				int vis=v[node][i];
				
				if(visited[vis])
				{
					if(color[node]==color[vis])  // if this node and connected node's color is same  
					{
						return false;
						break;
					}
				}
				else    					// if this node was not visited let it be visited and set color 
				{
					visited[vis]=1;
					Q.push(vis);
					color[vis]=!(color[node]);
				}
			}
			Q.pop();
		}
		return true;
}

int main()
{
	
	while(cin>>number_of_nodes && number_of_nodes)
	{
		cin>>number_of_edges;
		
		Clear(visited);
		Clear(color);
		
		for(i=0;i<number_of_edges;i++)  // it makes node 1 and node 2 connected
		{
			cin>>node1>>node2;
			v[node1].pb(node2);
			v[node2].pb(node1);
		}
		
		if(bfs(1))
		{
			cout<<"BICOLORABLE."<<endl;
		}
		else 
		{
			cout<<"NOT BICOLORABLE."<<endl;
		}
		
		for(i=0;i<number_of_nodes;i++)
		{
			v[i].clear();
		}
	}
	
	return 0;
}
