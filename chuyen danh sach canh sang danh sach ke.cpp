#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;
   int dinh,canh;
   vector<int> adj[1001];
   while(t--){
   	
   	cin>>dinh>>canh;
   	while(canh--){
   		int dinh1,dinh2;
   		cin>>dinh1>>dinh2;
   		adj[dinh1].push_back(dinh2);
   		adj[dinh2].push_back(dinh1);
   	}
   	for (int i=1;i<=dinh;i++){
   		cout<<i<<": ";
   		if(adj[i].size() == 0) continue;
   		for (int j :adj[i]) cout<<j<<" ";
   		cout<<endl;
   	}
   }
}  