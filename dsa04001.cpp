#include<bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
ull mod = 1e9+7;
ull rev(ull n)
{
	ull ans=0;
	while(n)
	{
		ans=ans*10+n%10;
		n/=10;
	}
	return ans;
}
ull binPow(ull n, ull p)
{
    if(p == 1) return n;
   ull res = binPow(n, p >> 1) % mod;
    res = (res * res) % mod;
    if(p & 1) res = (res * n) % mod;
    return res % mod;
}

int main()
{
   
    int t;
    ull n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n== 0) cout<<1<<endl;
        else{
       
  
        cout << binPow(n, rev(n)) << endl;
    	}
    }
    return 0;
}