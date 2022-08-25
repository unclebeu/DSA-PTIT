#include <bits/stdc++.h>
using namespace std;
int t,n,ok;
string s;
vector<string>res;
long long ans[501];
void sinh()
{
	int i=s.size()-1;
	while (i>=0 && s[i]== '9')
	{
		s[i]='0';
		--i;
	}
	if (i==-1) ok=0;
	else 
	{
		s[i]='9';
	}
}
int main()
{
	s="000000000000000";
	ok=1;
	while(ok)
	{
		res.push_back(s);
		sinh();
	}
		for(int i=1;i<=500;i++)
		{
			for (auto x:res){
				if (stoll(x)!=0 && stoll(x) %i ==0)
				{
					ans[i]=stoll(x);
					break;
				}
		}
	}
	cin>>t;while (t--)
	{
		cin>>n;
		cout<<ans[n]<<endl;
	}
}
