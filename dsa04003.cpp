#include<bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
ull mod = 123456789;
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
    ull n, p;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << binPow(2,n-1) << endl;
    }
    return 0;
}  