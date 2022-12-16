#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    
    int x;
    ll res = 0;
    cin >> x;
    while(cin >> x) res += (x > 0) * (x << 1);
    cout << res;
    return 0;
}