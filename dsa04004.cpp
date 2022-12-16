#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,k,t;
ll sol(ll n,ll k){
	if(k%2 == 1) return 1;
	ll x=pow(2,n-1);
	if (k==x) return n;
	else if(k>x) return sol(n-1,k-x);
	else return sol(n-1,k);
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   //freopen("output.txt", "w", stdout);
   //#endif
   cin>>t;while(t--){
   	cin>>n>>k;
   	cout<<sol(n,k)<<endl;
   }
}  