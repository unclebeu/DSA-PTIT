#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
string s;
stack<int>st;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   while(cin>>s){
   		if(s== "push" ){
   			cin>>n;
   			st.push(n);
   		}
   		else if(s=="pop" && st.size() !=0){
   			st.pop();
   		}
   		else{
   			if(st.empty()) cout<<"empty"<<endl;
   			else{
   				stack<int>tmp;
   				while(st.size()){
   					tmp.push(st.top());
   					st.pop();
   				}
   				while(tmp.size())
   				{
   					cout<<tmp.top()<<" ";
   					st.push(tmp.top());
   					tmp.pop();
   				}
   				cout<<endl;
   			}
   		}
   }
}  