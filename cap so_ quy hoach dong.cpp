#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
#define fi first
#define se second
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n;cin>>n;
   		pair<int,int> p[n];
   		for(pair<int, int> &i : p){
   			cin>>i.fi>>i.se;
   		}
   		
   		sort(p,p+n);
   		int f[n];
   		//memset(f,1,sizeof(f));
   		int res=-1;
   		for (int i=0;i<n;i++){
   			f[i]=1;
   			for (int j=0;j<i;j++){
   				if(p[i].fi > p[j].se)
   					f[i]=max(f[i],f[j]+1);
   					res=max(res,f[i]);
   			}
   		}
   		cout<<res<<endl;
   }
}  