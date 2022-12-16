#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
      string s;cin>>s;
      int cnt=0;
      stack<char>st;
      int n=s.length();
      for(int i=0;i<n;i++){
         if(s[i]=='(') {
            st.push('(');
         }
         else{
            if (st.empty()) {
               ++cnt;
               st.push ('(');
            }
            else{
               st.pop();
            }
         }
      }
      cout<<st.size()/2+cnt<<endl;
   }
}  