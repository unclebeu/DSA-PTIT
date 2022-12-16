#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		string s;
   		cin>>s;
   		int n=s.size();
   		string s2=s;
   		reverse (s2.begin(), s2.end());
   		int f[n+1][n+1];
   		memset(f,0,sizeof(f));
   		for (int i=1;i<=n;i++){
   			for (int j=1;j<=n;j++){
   				if(s[i]== s2[j]){
   					f[i][j] = f[i-1][j-1];
   				}
   				else {
   					f[i][j] =min( f[i][j-1],f[i-1][j] ) +1;
   				}
   			}
   		}
   		cout<< f[n][n]-1<<endl;
   }
}  