#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001], x[1001], s, n;
vector<string>res;
void Backtrack(ll sum , ll i, ll pos)
{
    if(sum == s)
    {
        string tmp;
        for(int j = 0 ; j < i ; j++)
        {
            tmp+=to_string(x[j]);
            if(j != i - 1) tmp+=" ";
            
        }
        res.push_back(tmp);
    }
    for(ll j = pos ; j < n ;++j)
    {
        if(sum + a[j] <= s)
        {
            x[i] = a[j];
            Backtrack(sum + a[j] , i + 1 , j + 1);
        }
    }
}

int main()
{
    cin >> n >> s;
    for(ll i = 0 ; i < n ;i++) cin >> a[i];
    sort(a , a + n);
    Backtrack(0 , 0 , 0);
   reverse (res.begin(),res.end());
    for (auto x:res) cout<<x<<endl;
    cout<<res.size()<<endl;
}
