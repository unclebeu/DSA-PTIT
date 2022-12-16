#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<vector<int>> adj;
vector<int>parent;
bitset<100005>visited;
void dfs(int u){
	if(visited[u]) return;
	visited[u]=1;
	for (int i:adj[u]){
		if(!visited[i]){
			parent[i]=u;
			dfs(i);
		}
	}
}
void bfs(int u){
	
	queue<int>q;
	q.push(u);
	visited[u]=1;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int i:adj[u]){
			if(!visited[i]){
				parent[i]=u;
				visited[i]=1;
				q.push(i);
			}
		}
	}
}
void findPath(int s,int e){
	if(!parent[e]){
		cout<<-1;
		return ;
	}
	vector<int>res;
	while(s!=e){
		if(!e){
			cout<<-1;
			return;
		}
		res.push_back(e);
		e=parent[e];
	}
	res.push_back(e);
	reverse(res.begin(), res.end());
	for(int h: res ) cout<<h<<" ";
}

int main()
{
    int t = 1, n, m, x, y, s, e;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> s >> e;
        adj.resize(n + 1);
        parent.resize(n + 1);
        for(int i = 1; i <= n; ++i)
        {
            adj[i].clear();
            parent[i] = 0;
            visited[i] = 0;
        }
        while(m--)
        {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s);
        findPath(s, e);
        cout << endl;
    }
    return 0;
}  