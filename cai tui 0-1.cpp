#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();

ll n, v, res;
ll dp[1005][1005];
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		
   		cin>>n>>v;
   		ll volume[n+1],value[n+1];
   		for (int i=1;i<=n;i++) cin>>volume[i];
   		for (int i=1;i<=n;i++) cin>>value[i];
   		res=0;
   		for(int i = 1; i <= n; ++i){
        	for(int j = 1; j <= v; ++j){
            	if(j < volume[i]) dp[i][j] = dp[i - 1][j];
            	else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - volume[i]] + value[i]);
            	res = max(res, dp[i][j]);
        	}
    	}
   		cout<<res<<endl;
   	}
}  

