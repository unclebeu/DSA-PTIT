#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int t,n;
int a[100005];
int res[100005];
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   cin>>t;while(t--){
   	cin>>n;
   	for (int i=0;i<n;i++) {
   		cin>>a[i];
   	}
   	res[n-1]=-1;
   	stack<int>st;
   	st.push(a[n-1]);
   	
   	for(int i=n-2;i>=0;i--){
   		if(st.size() && a[i]<st.top()){
   			 res[i]=st.top();
   			
   			 st.push(a[i]);
   		}
   		else {
   			while (st.size() && a[i] >= st.top()) st.pop();
   			if(st.size()) res[i]=st.top();
   			else res[i]=-1;
   			st.push(a[i]);
   		}
   		
   	}
   	for(int i=0;i<n;i++) cout << res[i] << ' ';
        cout << endl;
   }
}  