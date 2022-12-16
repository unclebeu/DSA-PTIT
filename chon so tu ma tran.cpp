#include <bits/stdc++.h>
using namespace std;
int t,n,k;
int a[1000];
int b[1000];
int main()
{
	cin>>t;while (t--)
	{
		cin>>n>>k;
		for (int i=1;i<=n;i++)
		{
			dor (int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
			
		}
		for (int i=1;i<=n;i++)b[i] =i;
		vector <string>res;
		do{
			int sum=0;
			for (int i=1;i<=n;i++)
			{
				sum+=a[b[i]];
			}
			if (sum ==k)
			{
				string ans ="";
				for (int i=1;i<=n;i++)
				{
					ans+=to_string(b[i]);
					ans+=" ";
				}
				res.push_back(ans);
			}
		}while(next_permutation(b+1,b+n+1));
		cout<<res.size()<<endl;
		for (auto x:res)
		{
			cout<<x<<endl;
		}
	}
}
