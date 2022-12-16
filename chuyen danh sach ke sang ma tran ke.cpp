#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//std::vector<int> adj[1005];
//int a[10005][10005];
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int n,x;cin>>n;
   vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
   cin.ignore();
   string s;
   for (int i=1;i<=n;i++) 
   {
   		getline(cin,s);
   		stringstream ss(s);
   		while (ss>>s){
   			x=stoi(s);
   			a[x][i]=a[i][x]=1;
   		}
   }
   for (int i=1;i<=n;i++) {
   		for (int j=1;j<=n;j++) {cout<<a[i][j]<<" ";}
		cout<<endl;
 	}
   	
}  