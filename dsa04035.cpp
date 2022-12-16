#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
const int MOD =1e9+7;
ll pown(ll n,ll k){
	ll res=1;
	while(k){
		if(k%2 == 1){
			res*=n;
			res%=MOD;
		}
		n*=n;
		n%=MOD;
		k/=2;
	}
	return res;
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   //freopen("output.txt", "w", stdout);
   //#endif
   while(true){
   		ll n,k;cin>>n>>k;
   		if (n == 0&& k==0) return 0;
   		cout<<pown(n,k)<<endl;
   }

}  