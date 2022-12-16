#include <bits/stdc++.h>
using namespace std;
vector <string>res;
void in(int a[],int n)
{
	string tmp="";
	tmp+="[";
	for (int i=1;i<=n;i++)
	{
		cout<<a[i];
		if(i == n )
		{
			break;
		}
		tmp+=" ";
	}
	tmp+="]";
	res.push_back(tmp);
}
int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[1000];
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		while(n)
		{
			in(a,n);
			n-=1;
			for (int i=1;i<=n;i++)
			{
				a[i]=a[i]+a[i+1];
			}
		}
		reverse(res.begin(),res.end());
		for (auto x:res)
		{
			cout<<x<<endl;
		}
	}
}
