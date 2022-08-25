#include <bits/stdc++.h>
using namespace std;
int t,n,ok,a[10000];
vector <int> res;
void kt()
{
	for (int i=1;i<=n;i++)
	{
		a[i]=i;
	}
}
void sinh()
{
	int i=n-1;
	while (i>=1 && a[i]>a[i+1])
	{
		--i;
	}
	if (i==0) ok=0;
	else{
		int j=n;
		while (a[i]>a[j])--j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main ()
{
	cin >>t;
	while (t--)
	{
		cin>>n;
		kt();
		ok=1;
		while(ok)
		{
			for (int i=1;i<=n;i--)
			{
				res.push_back(a[i]);
			}
			
		cout<<" ";
		sinh();
		}
		cout<<endl;
		
	}
}
