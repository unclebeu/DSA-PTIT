#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string sol(ll *a,ll n,ll &k){
	ll sum=0;
	unordered_map<ll,int>mp;

	for (int i=0;i<n;i++){
		sum+=a[i];
		if (sum == k || mp[sum-k]) 
			return "YES"; 
		mp[sum]=1;
	}
	return "NO";
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		ll n,k;
   		cin>>n>>k;
   		ll a[n+1];
   		for (int i=0;i<n;i++) cin>>a[i];
   		cout<<sol(a,n,k)<<endl;
   		cout<<endl;
   }
}  