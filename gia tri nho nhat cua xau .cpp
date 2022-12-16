#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int k;
   		cin>>k;
   		string s;cin>>s;
   		priority_queue<ll>q;
   		//int n=s.size();
   		ll danhdau[30]={0};
   		for (char i:s){
   			++danhdau[i-'A'];
   		}
   		for (int i=0;i<26;i++){
   			if (danhdau[i])
   			q.push(danhdau[i]);
   		}
   		while(k-- ) {
   			int u= q.top();
   			q.pop();
   			u--;
   			q.push(u);	
   		}
   		ll ans=0;
   		while (!q.empty()){
   			ll tmp=q.top();
   			ans += tmp*tmp;
   			q.pop();
   		}
   		cout<<ans<<endl;
   }
}  