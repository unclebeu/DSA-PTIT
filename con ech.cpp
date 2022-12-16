#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n,k;
   		cin>>n>>k;
   		ll f[n+1]={0};
   		f[0]=1;
   		for (int i=1;i<=n;i++){
   			for (int j=1;j<=min(i,k);j++){
   				f[i]+=f[i-j];
   				f[i]%=mod;
   			}
   		}
   		cout<<f[n]<<endl;
   }
}  