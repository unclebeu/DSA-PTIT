#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n,s;
   		cin>>n>>s;
   		int a[205];
   		for(int i=0;i<n;i++) cin>>a[i];
   		bitset<400005> dp;
   		dp[0]=1;
   		for (int i=0;i<n;i++){
   			for (int j=s;j>=a[i];j--){
   				if (dp[j-a[i]]){
   					dp[j]=1;
   				}
   			}
   		}
   		if (dp[s]) cout<<"YES\n";
   		else cout<<"NO\n";
   }
}  