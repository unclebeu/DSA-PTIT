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

int main()
{
    faster();
    int t = 1;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        string ans = "";
        stack<int> st;
        for(int i = 0; i <= s.sz; ++i)
        {
            st.push(i + 1);
            if (i == s.sz or s[i] == 'I')
            {
                while(!st.empty())
                {
                    stringstream ss;
                    string tmp;
                    ss << st.top();
                    ss >> tmp;
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}