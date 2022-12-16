#include<bits/stdc++.h>

using namespace std;



int main()
{
    
    int t , n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a + n);
        if(a[0] == a[n - 1]) cout << -1 << endl;
        else
        {
            int idx = 1;
            while(a[idx] == a[0]) ++idx;
            cout << a[0] << ' ' << a[idx] << endl;
        }
    }
    return 0;
}