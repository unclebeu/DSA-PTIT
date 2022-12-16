#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    stack<int>st;
    string s;
    cin>>t;while (t--)
{	
	 cin>>s;
	 
	 if(s=="PUSH"){
	 	int n;
        cin>>n;
	 	st.push(n);
	 }
	 
	 else if(s == "POP" and st.size()) st.pop();
	 else if(s== "PRINT"){
    if(st.size()) cout<<st.top()<<endl;
    else cout<<"NONE"<<endl;
     }
	 
}
}
