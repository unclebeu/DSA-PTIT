#include <bits/stdc++.h>
using namespace std;
int sum,cnt,n,k,ok,a[1000000];
string s;
void sinh(string s)
{
	
	int i=s.size()-2;
	while (i>=0 && s[i]>=s[i+1])
	{
		--i;
	}
	if (i<=0)
	{
		cout<<"BIGGEST"<<endl;
	}
	else
	{
		int j=s.size()-1;
		while (s[i] >=s[j]) --j;
		swap(s[i],s[j]);
		reverse(s.begin()+i+1,s.end());
		cout<<s<<endl;
	}
}
int main()
{
	int t;cin>>t;while(t--)
	{
		cin>>n;
		cin>>s;
		cout<<n<<" ";
		sinh(s);
		
	}
}
