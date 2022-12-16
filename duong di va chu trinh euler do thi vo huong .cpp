
#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int dis[1005], low[1005], par[1005], v, e, cnt;
bitset<1005> bs;
vector<vector<int>> a;
set<int> res;

inline void DFS(int u)
{
    bs[u] = 1;
    int child = 0;
    dis[u] = low[u] = cnt++;
    for(int &i : a[u])
    {
        if(!bs[i])
        {
            ++child;
            par[i] = u;
            DFS(i);
            low[u] = min(low[u], low[i]);
            if(low[i] >= dis[u] and par[u]) res.insert(u);
        }
        else if(i != par[u]) low[u] = min(low[u], dis[i]);
    }
    if(child > 1 and !par[u]) res.insert(u);
}

int main()
{
    faster();
    int t = 1, x, y;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        a.clear();
        res.clear();
        a.resize(v + 5);
        cnt = 1;
        bs.reset();
        memset(dis, 0, v + 5);
        memset(low, 0, v + 5);
        memset(par, 0, v + 5);
        while(e--)
        {
            cin >> x >> y;
            a[x].pb(y);
            a[y].pb(x);
        }
        for(int i = 1; i <= v; ++i)
            if(!bs[i])
                DFS(i);
        for(int i : res) cout << i << ' ';
        cout << endl;
    }
    return 0;
}