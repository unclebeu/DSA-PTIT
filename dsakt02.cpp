#include<bits/stdc++.h>

using namespace std;


int b[35], n, s;
bool flag;

void Try(int i, int cur = 0, int cnt = 0)
{
    if(flag) return;
    if(cur > s) return;
    if(cur == s)
    {
        flag = 1;
        cout << cnt << endl;
        return;
    }
    for(int j = i; j <= n; ++j) Try(j + 1, cur + b[j], cnt + 1);
}

int main()
{
    
        cin >> n >> s;
        for(int i = 1; i <= n; ++i) cin >> b[i];
        sort(b + 1, b + 1 + n, greater<long long>());
        flag = 0;
        Try(1);
        if(!flag) cout << -1 << endl;
    
    return 0;
}
