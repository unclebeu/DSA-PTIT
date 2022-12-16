#include <bits/stdc++.h>
using namespace std;
int n,t,ok;

string s;
vector<string>res;
void sinh ()
{
	int i=s.size()-1;
	while (i>=0 && s[i] =='1')
	{
		s[i]='0';
		--i;
	}
	if (i<0) ok=0;
	else s[i]='1';
}
void kt()
{
	for (int i=1;i<=15;i++)
	{
		ok =1;
		s=string(i,'0');
		while (ok)
		{
			string tmp=s;
			reverse (tmp.begin(),tmp.end());
			res.push_back(s+tmp);
			sinh();
		}
	}
}
int main()
{
	cin>>t;
	kt();
	while(t--)
	{
		cin>>n;
		for(auto x:res)
		{
			if (x.size()==n)
			{
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
}
