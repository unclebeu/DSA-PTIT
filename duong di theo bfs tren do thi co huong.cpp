#include<bits/stdc++.h>
using namespace std;
using ll=long long;
std::vector<std::vector<int>> adj;
vector<int>parent;
bitset<1005> visited;
int t,n,m,s,e;
void bfs(int u ){
	queue <int>q;
	q.push(u);
	visited[u]=1;
	while (!q.empty()){
		u=q.front();
		q.pop();
		for (int i: adj[u]){
			if(!visited[i]){
				q.push(i);
				visited[i]=1;
				parent[i]=u;
			}
		}
	}
}
void Path(int s,int t){
	if(!parent[t]){
		cout<<-1;return ;
	}
	vector<int>res;
	while (t!=s){
		if (!t){
			cout<<-1;return;
		}
		
			res.push_back(t);
			t=parent[t];
		
	}
	res.push_back(t);
	reverse(res.begin(),res.end());
	for (auto o:res) cout<<o<<" ";
}

void findPath(int s, int e)
{
    if(!parent[e])
    {
        cout << -1;
        return;
    }
    vector<int> res;
    while(e != s)
    {
        if(!e)
        {
            cout << -1;
            return;
        }
        res.push_back(e);
        e = parent[e];
    }
    res.push_back(e);
    reverse(res.begin(),res.end());
    for(int &i : res) cout << i << ' ';
}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   cin>>t;while (t--){
   		cin>>n>>m>>s>>e;
   		adj.resize(n+1);
   		parent.resize(n+1);
   		for (int i=0;i<n;i++){
   			adj[i].clear();
   			visited[i]=0;
   			parent[i]=0;
   		}
   		for (int i=0;i<m;i++){
   			int x,y;cin>>x>>y;
   			adj[x].push_back(y);
   		}
   		bfs(s);
   		Path(s,e);
   		cout<<endl;
   }
}  