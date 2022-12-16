#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   //freopen("output.txt", "w", stdout);
   //#endif
   int t;cin>>t;while(t--){
       int n,m;
       cin>>n>>m;
       int a[n+5],b[m+5];
       vector<ll> v;
       for(int i=0;i<n;i++) {
       	cin>>a[i];
       	v.push_back(a[i]);
       }
       for(int i=0;i<m;i++) {
       	cin>>b[i];
       	v.push_back(b[i]);
       }
       sort(v.begin(),v.end());
       for (auto x:v)
       {
       	cout<<x<<" ";
       }
       cout<<endl;
   }
}  