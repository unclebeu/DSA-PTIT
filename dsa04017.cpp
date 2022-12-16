#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll f[94],n,k;
ll solve(int n,int k){
	if(k==1) return '0';
	if(k==2) return '1';
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
   		if(solve(n,k) % 2 == 0) cout<<"0"<<endl;
   		else cout<<1<<endl;
   }
} 