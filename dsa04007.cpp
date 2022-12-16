#include<bits/stdc++.h>

using namespace std;

int cv(string &s, int &k)
{
    int res = 0;
    for(char &i : s) res = res * k + (i - '0');
    return res;
}

int main()
{
    
    int t = 1, k;
    cin >> t;
    string a, b;
    while(t--)
    {
        cin >> k >> a >> b;
        int res = cv(a, k) + cv(b, k);
        stack<int> st;
        while(res)
        {
            st.push(res % k);
            res /= k;
        }
        while(st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}