#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int n;cin>>n;
   		int a[n+1];
   		for (int i=0;i<n;i++) cin>>a[i];
   		ll f_max[n+1]={0},f_min[n+1]={0};
   		
   		for (int i=0;i<n;i++){
   			f_max[i] =a[i];
   			for (int j=0;j<i;j++){
   				if (a[i] > a[j]){
   					f_max[i]=max(f_max[i],f_max[j]+a[i]);
   				}
   			}
   		}
   		for (int i=n-1;i>=0;i--){
   			f_min[i] =a[i];
   			for (int j=i+1;j<n;j++){
   				if (a[i] > a[j]){
   					f_min[i]=max(f_min[i],f_min[j]+a[i]);
   				}
   			}
   		}
   		ll sum=0;
   		for (int i=0;i<n;i++){
   			sum=max(sum,f_max[i]+f_min[i]-a[i]);
   		}
   		cout<<sum<<endl;
   }
}  