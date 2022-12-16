#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   string s;
   cin>>s;
   stack <int>st;
   int index=1;
   for(int i=0;i<s.size();i++){
   		if (s[i]=='(') {
   			cout<<index<<" ";
   			st.push(index);
   			index++;
   		}
   		else if (s[i]==')'){
   			cout<<st.top()<<" ";
   			st.pop();
   		}
   }
}  