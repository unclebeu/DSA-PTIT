#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int t,a[10000007];
ll n,k;
ll sol(int a[],ll l,ll r, ll x){
{
    if(l > r) return res;
    int m = (l + r) / 2;
    if(a[m] <= x)
    {
        res = a[m];
        return sol(a , m + 1 , r , res , x);
    }
    else return sol(a , l , m - 1 , res , x);
    
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
   		for(int i=0;i<n;i++) cin>>a[i];
   		cout<<sol(a,k,0,n-1)+1<<endl;
   }
}  