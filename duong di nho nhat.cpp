#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n,m;cin>>n>>m;
   		int a[n+1][m+1];
   		memset(a,0,sizeof(a));
   		for (int i=1;i<=n;i++)
   			for (int j=1;j<=m;j++)
   				cin>>a[i][j];
   		for (int i=1;i<=n;i++){
   			for (int j=1;j<=m;j++){
				if(i ==1 ) a[i][j]=a[i][j-1]+a[i][j];
				if (j==1 ) a[i][j]=a[i-1][j]+a[i][j];
				else 
					a[i][j]+= min({a[i-1][j],a[i][j-1],a[i-1][j-1]});   				
   			}
   		}
   		cout<<a[n][m]<<endl;
   }
}  