#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   	int t ;
    string s;
    cin >> t;
    cin.ignore();
    while(t--){
   		//string s;
   		getline(cin,s);
   		stringstream ss(s);
   		stack <string> st;
   		while (ss>>s){
   			st.push(s);
   		}
   		while (st.size()){
   			cout<<st.top()<<" ";
   			st.pop();
   		}
   		cout<<endl;
   }
}  