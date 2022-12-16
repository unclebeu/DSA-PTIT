#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n,m,u;
   		cin>>n>>m>>u;
   		vector<int>adj[1005];
   		bool visited[1005];
   		for (int i=1;i<=m;i++){
   			int x,y;
   			cin>>x>>y;
   			adj[x].push_back(y);
   			adj[y].push_back(x);
   		}
   		memset(visited,false,sizeof(visited));
   		queue <int>q;
   		cout<<u<<" ";
   		q.push(u);
   		visited[u]=true;
   		while(!q.empty()){
   			int z=q.front();
   			q.pop();
   			for(int i :adj[z]){
   				if(visited[i]) continue;
   				else{
   					visited[i]=true;
   					q.push(i);
   					cout<<i<<" ";
   				}
   			}
   		}
   		cout<<endl;

   }
}  
/*
2
6 8 1

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 

6 9 1

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/