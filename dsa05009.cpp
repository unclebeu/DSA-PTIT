#include <bits/stdc++.h>
using namespace std;
int t,n,ok;
int a[10000];

int main()
{
	cin>>t;while(t--)
	{
	cin>>n;
	
	long long s=0;
    for (int i=0;i<n;i++)
	 {
		cin>>a[i];
	    s+=a[i];
    }
   //	cout<<s<<endl;
	if (s %2 !=0) 
	{
		cout<<"NO"<<endl;
	
	}
 	else
    {
        s /= 2;
        bool dp[s + 1];
        memset(dp , 0 , sizeof(dp));
        dp[0] = 1;
      for(int i = 0 ; i < n ; i++)
        {
            for(int j = s ; j >= a[i] ; j--)
            {
                if(dp[j - a[i]])
                {
                    dp[j] = 1;
                }
            }
        }
        if(dp[s]) cout << "YES"<<endl;
        else cout <<"NO"<<endl;
    }
}
}
