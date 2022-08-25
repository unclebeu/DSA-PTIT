#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[100000];
set<int>res;
void sinh()
{
	int i=k;
	while (i>=1 && a[i] ==n-k+i)
	{
		--i;
	}
	if(i==0)
	{
		cout<<k<<endl;
	}
	else 
	{
		a[i]++;
		for (int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
		int ans=0;
		for (int i=1;i<=k;i++)
		{
			if(res.count(a[i]))
			{
				++ans;
			}
		}
		cout<<k-ans<<endl;
	}
}
int main()
{
	cin>>t;while(t--)
	{
		res.clear();
		cin >> n >>k ;
    for(int i = 1 ; i <= k ; i++)
    {
        cin >> a[i];
        res.insert(a[i]);
    }
    sinh();

	}
}
