#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
int main()
{
    
    int t = 1;
    cin >> t;
    string s;
    ll a, b;
    while(t--)
    {
        cin >> s;
        stack<ll> st;
        for(char &i : s)
        {
            if(isdigit(i)) st.push(i - '0');
            else
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                switch(i)
                {
                    case '+':
                    {
                        st.push(a + b);
                        break;
                    }
                    case '-':
                    {
                        st.push(a - b);
                        break;
                    }
                    case '*':
                    {
                        st.push(a * b);
                        break;
                    }
                    default:
                    {
                        st.push(a / b);
                        break;
                    }
                }
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}