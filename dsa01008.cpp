
#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)

int n,k,a[100],ok=false;
void init(){
	FOR(i,1,n+1){
		a[i]=0;
	}
}
 
void next(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) ok =false;
	else a[i]=1;
}
 
bool check(){
	int cnt=0;
	FOR(i,1,n+1) cnt+=a[i];
	return cnt==k;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		ok=true;
		init();
		while(ok){
			if(check()){
				FOR(i,1,n+1) cout<<a[i];
				cout<<"\n";
			}
			next();
		}
	}
}
