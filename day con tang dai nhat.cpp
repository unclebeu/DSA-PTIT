#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int n;cin>>n;
   int a[n+1];
   for (int i=0;i<n;i++) cin>>a[i];
   vector<int>res;
   res.push_back(a[0]);
   for (int i=1;i<n;i++){
   		auto it = lower_bound(res.begin(),res.end(),a[i]);
   		if (it == res.end()) res.push_back(a[i]);
   		else *it =a[i];
   }
   cout<<res.size();
}  