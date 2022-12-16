#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n;cin>>n;
   		int a[n];
   		for (int i=0;i<n;i++) cin>>a[i];
   		int f_max[n],f_min[n];
   		f_max[0]=f_min[n-1]=1;
   		for (int i=1;i<n;i++){
   			
   				if (a[i]>a[i-1]){
   					f_max[i]=f_max[i-1]+1;
  				}
   				else f_max[i]=1;
   			}
   		

   		for (int i=n-2;i>=0;i--){
   			
   				if (a[i]>a[i+1]){
   					f_min[i]=f_min[i+1]+1;
   				}
   				else f_min[i]=1;
   			}
   		int ans=-1;
   		for (int i=0;i<n;i++){
   			ans= max(ans,f_max[i]+f_min[i]-1);
   		}
   		cout<<ans<<endl;

   }
}  