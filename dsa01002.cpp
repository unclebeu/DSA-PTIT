#include <bits/stdc++.h>
using namespace std;
int t,n,k,a[100000],ok;


int main()
{
	cin>>t;while(t--)
	{
		cin>>n>>k;
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int i=k;
		while(i>=1 && a[i]== n-k+i)
		{
			--i;
		}
	if(i==0) 
	{
		for(int i=1;i<=k;i++)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		++a[i];
		for(int j=i+1;j<=k;j++)
		{
			a[j]=a[i]+j-i;
		}
		for(int i=1;i<=k;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	}
}
