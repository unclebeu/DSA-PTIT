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
    int n,k;cin>>n>>k;
    int a[n];
    int cnt[1000005] = {};
    for (int i=1;i<=n;i++) 
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    
        if (!cnt[k] )cout<<-1<<endl;

        else cout<<cnt[k]<<endl; 
    
  }
}