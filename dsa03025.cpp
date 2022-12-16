#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a , pair<int,int>b)
{
    return a.second < b.second;
}
int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		pair<int,int>p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		sort(p,p+n,cmp);
		int ans=1;
		int mn=p[0].second;
		for(int i=0;i<n;i++)
		{
			if (p[i].first >mn)
			{
				ans++;
				mn=p[i].second;
			}
		}
		cout<<ans<<endl;
	}
}
