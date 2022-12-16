#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
const int mod =1e9+7;

struct  matran
{	
	ll n;
	ll a[10][10];
	

};
matran operator * (matran a, matran b){
	matran res;
	res.n=a.n;
	for (int i=0;i<a.n;i++){
		for (int j=0;j<a.n;j++){
			res.a[i][j] =0;
			for (int k=0;k<a.n;k++){
				res.a[i][j] += a.a[i][k] *b.a[k][j];
				res.a[i][j] %=mod;
			}
		}
	}
	return res;
}
matran powmod(matran a,ll n){
	if (n== 1) return a;
	matran tmp=powmod(a,n/2);
	if (n%2 ==1 )return tmp*tmp*a;
	else return tmp*tmp;
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  
   ll t,n,k;
   cin>>t;while(t--){
   	cin>>n>>k;
   	matran A;
   	A.n=n;
  
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin>>A.a[i][j];
			}
		}
	matran res =powmod(A,k);
	for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cout<<res.a[i][j]<<" ";
			}
			cout<<endl;
		}
   }
}  