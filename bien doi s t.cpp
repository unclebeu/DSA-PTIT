#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int te;cin>>te;while(te--){
   		int s,t;
   		cin>>s>>t;

   		set<int>se;
   		se.insert(s);
   		queue <pair<int,int>>q;
   		q.push({s,0});
   		while(1){
   			pair<int,int> top=q.front();
   			q.pop();
   			if (top.first == t){
   				cout<<top.second<<endl;
   				break;
   			}
   			if (top.first> 1 && !se.count(top.first-1) ){
   				q.push({top.first-1,top.second+1});
   				se.insert(top.first-1);
   			}
   			if (top.first<t && !se.count(top.first*2)){
   				q.push({top.first*2,top.second+1});
   				se.insert(top.first*2);
   			}
   		}
   }
}  