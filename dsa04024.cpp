#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
ll n,k;
const int MOD =1e9+7;
struct matran{
	ll f[11][11];
	friend istream&  operator >> (istream &in,matran &x){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				in>>x.f[i][j];
			}
		}
		return in;
	}
	friend ostream& operator << (ostream &out , matran x)
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                out << x.f[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }
	friend matran operator * (matran a,matran b){
		matran res;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				res.f[i][j]=0;
				for (int k=0;k<2;k++){
					res.f[i][j] += a.f[i][k]*b.f[k][j];
					res.f[i][j] %=MOD;
				}
			}
		}
		return res;
	}	
};
matran powM(matran a, int  n)
{
	if (n==1 ) return a;
	matran tmp =powM(a,n/2);
	if (n%2 == 0){
		return tmp*tmp;
	}
	else return tmp*tmp*a;
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("error.txt", "w", stderr);
   //freopen("output.txt", "w", stdout);
   //#endif
   int t;cin>>t;while(t--){
   cin>>n>>k;
   matran A;
   cin >>A;
   
   matran res=powM(A,k);
   ll ans=0;
 	for(int k=0;k<n;k++){
 		ans+= res.f[k][n-1];
 		ans %=MOD;
 	}
 	cout<<ans<<endl;
} 
} 