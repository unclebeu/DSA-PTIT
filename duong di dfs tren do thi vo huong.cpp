#include<bits/stdc++.h>
using namespace std;
using ll=long long;
std::vector<int> parent;
bitset<1005> visited;
vector<vector<int>>adj;
void dfs(int u){
	visited[u]=1;
	for (int x: adj[u]){
		if (!visited[x]){
			parent[x]=u;
			dfs(x);
		}
	}
}
void Path(int s,int t)
{
	if (!parent[t]){
		cout<<-1;
		return;
	}
	vector<int>res;
	while ( t!=s) {
		if (!t){
			cout<<-1;
			return ;
		}
		res.push_back(t);
		t=parent[t];

	}
	res.push_back(t);
	reverse(res.begin(),res.end());
	for (int i:res) cout<<i<<" ";
} 


int main()
{
  	int t,n,m,x,y,s,e;
  	 
  	cin>>t;
  	while(t--){
  		cin>>n>>m>>s>>e;
  		adj.resize(n+1);
  	 	parent.resize(n+1);
  		for (int i =0;i<n;i++){
  			adj[i].clear();
  			parent[i]= 0;
  			visited[i]= 0;

  		}
  		for (int i=0;i<m;i++){
  			cin>>x>>y;
  			adj[x].push_back(y);
  		}
  		dfs(s);
  		Path(s,e);
  		cout<<endl;
  	}
   
}  