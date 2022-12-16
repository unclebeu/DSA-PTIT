#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   		int s;cin>>s;
   		unordered_map<int,int>se;
   		se[s]=1;
   		queue<pair<int,int>> q;
   		q.push({s,0});
   		while(1){
   		 	pair<int,int>top =q.front();
   		 	q.pop();
   		 	if (top.first==1){
   		 		cout<<top.second<<endl;
   		 		break;
			}
			for (int i=2;i*i<=s;i++){
				if (top.first % i == 0){
					int m=max(i,top.first/i);
					if (se[m] == 0){
						q.push({m,top.second+1});
						se[m]=1;
					}
				}
			}
			if (se[top.first-1 ]== 0){
				q.push({top.first-1,top.second+1});
				se[top.first-1]=1;
			}
   		}
   }
}  