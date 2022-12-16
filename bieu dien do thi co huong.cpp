#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int t,n,m;

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   cin>>t;while(t--){
   	cin>>n>>m;
   	std::vector<set<int>> adj(n+1);
   	//for (int i=0;i<n;i++) adj[i].clear();
   	for (int i=0;i<m;i++){
   		int x,y;cin>>x>>y;
   		adj[x].insert(y);
   	}
   	for (int i=1;i<=n;i++){
   		cout<<i<<": ";
   		//if (adj[i].empty() ) continue;
   		for (auto &j :adj[i]) cout<<j<<" ";
   		cout<<endl;
   	}
   }
}  