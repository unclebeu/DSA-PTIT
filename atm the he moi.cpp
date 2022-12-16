#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    
    int t = 1;
    cin >> t;
    ll W, c;
    while(t--)
    {
        cin >> W >> c;
        if(W % 1000)
            cout << 0 << endl;
        else
        {
            W /= 1000;
            ll money = 0, toltal = 1, tmp;
            while(W and c--)
            {
                tmp = W % 10;
                if(tmp == 1 or tmp == 2 or tmp == 3 or tmp == 5)
                    ++money;
                else if(tmp == 4 or tmp == 6)
                {
                    money += 2;
                    toltal <<= 1;
                }
                else if(tmp == 7 or tmp == 8)
                    money += 2;
                else if(tmp == 9)
                {
                    money += 3;
                    toltal *= 3;
                }
                W /= 10;
            }
            if(W)
            {
                money += W / 5;
                if(W % 5 == 4)
                    money += 2;
                else if(W % 5)
                    ++money;
                if(W % 5 == 1 and W > 1 or W == 4)
                    toltal <<= 1;
                else if(W % 5 == 4 and W > 4)
                    toltal *= 3;
            }
            cout << money << ' ' << toltal << endl;
        }
    }
    return 0;
}