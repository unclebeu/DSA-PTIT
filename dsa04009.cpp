#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
const int mod =1e9+7;
int t,n,m;
struct  matran
{	
	ll a[2][2];

};
matran operator * (matran a, matran b){
	matran res;
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			res.a[i][j] =0;
			for (int k=0;k<2;k++){
				res.a[i][j] += a.a[i][k] *b.a[k][j];
				res.a[i][j] %=mod;
			}
		}
	}
	return res;
}
matran powmod(matran a,int n){
	if (n== 1) return a;
	matran tmp=powmod(a,n/2);
	if (n%2 ==1 )return tmp*tmp*a;
	else return tmp*tmp;
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   //freopen("output.txt", "w", stdout);
   //#endif
   cin>>t;while(t--){
   	cin>>n;
   	matran A;
   	A.a[0][0]=1;
   	A.a[1][0]=1;
	A.a[0][1]=1;
	A.a[1][1]=0;
	matran res =powmod(A,n);
	cout<<res.a[0][1]<<endl;
   }
}  