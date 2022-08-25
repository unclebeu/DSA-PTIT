#include <bits/stdc++.h>
using namespace std;

int n,a[100],ok;
 
void init(){
	for(int i=1;i<=n;i++) a[i]=i;
}
 
void next(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok=false;
	}
	int j=n;
	while(a[i]>a[j]) --j;
	swap(a[i],a[j]);
	sort(a+i+1,a+n+1);
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		cin>>n;
		ok=true;
		vector<string> res;
		init();
		while(ok)
		{
			string tmp="";
			for(int i=1;i<=n;i++)
			
				tmp+= to_string(a[i]);
				res.push_back(tmp);
			next();
		}
		reverse(res.begin(),res.end());
		for(string x: res){
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}
