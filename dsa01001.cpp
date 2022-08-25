#include <bits/stdc++.h>
using namespace std;
int t,n,a[100000],ok,cnt;
void next(string s){
	int i=s.length()-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i!=-1) s[i]='1';
	cout<<s<<"\n";
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		next(s);
	}
}
