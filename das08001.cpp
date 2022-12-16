#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//deque<int>Q;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
	int test;cin>>test;while(test--){
		deque<int> Q;
		int t;cin>>t;
		while(t--){
	
   		int x;cin>>x;
   		//Q.clear();
   		//st.clear;
   		
   			if(x==1){
   				cout<<Q.size()<<endl;
   			}
   			else if (x== 2){
   				if (Q.empty()) cout<<"YES"<<endl;
   				else cout<<"NO"<<endl;
   			}
   			else if (x==3){
   				int i;
   				cin>>i;
   				Q.push_back(i);
   			}
   			else if(x==4){
   				if (!Q.empty()) Q.pop_front();
   				//else continue;
   			}
   			else if(x==5)
   				if (!Q.empty()) cout<<Q.front()<<endl;
   				else cout<<-1<<endl;
   			else	if (x==6)
   				if (!Q.empty()) cout<<Q.back()<<endl;
   				else cout<<-1<<endl;
   		}
	}   
}
