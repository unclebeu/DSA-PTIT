#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll f[100],n,k;
char solve(ll n,ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]) return solve(n-2,k);
	else return solve(n-1,k-f[n-2]);
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   //freopen("output.txt", "w", stdout);
   //#endif
   int t;cin>>t;while(t--){
   		cin>>n>>k;
   		f[1]=1;f[2]=1;
   		for(int i=3;i<=92;i++) f[i]=f[i-1]+f[i-2];
   			cout<<solve(n,k)<<endl;
   }
}  