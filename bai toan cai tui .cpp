#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n,v;
   		cin>>n>>v;
   		int dp[n+1][v+1];
   		int w[n+1],va[n+1];
   		for (int i=1;i<=n;i++) cin>>w[i];
   		for (int j=1;j<=n;j++) cin>>va[j];
   		memset(dp,0,sizeof(dp));
   		for (int i=1;i<=n;i++){
   			for (int j=0;j<=v;j++){

   				dp[i][j]=dp[i-1][j];
   				if(j>=w[i]){
   					dp[i][j] =max ( dp[i][j] ,dp[i-1][j-w[i]]+ (int)va[i] );
   				}
   			}
   		}
   		cout<<dp[n][v]<<endl;
   }

}  