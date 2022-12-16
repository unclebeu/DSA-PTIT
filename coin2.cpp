#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int mod=1e9+7;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int n,s;
   cin>>n>>s;
   int a[n];
   for (int i=1;i<=n;i++) cin>>a[i];
   ll f[s+1];
   memset(f , 0 , sizeof(f));
   f[0]=1;
   for (int i=1;i<=s;i++){
   		for (int j=1;j<=n;j++){
   			if(i>=a[j]){
   				f[i] += f[i-a[j]];
   				f[i] %= (int)(1e9+7);
   			}
   		}
   }
   if (!f[s]) cout<<"-1\n";
   else cout<<f[s];
}  