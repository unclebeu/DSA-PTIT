#include <bits/stdc++.h>
using namespace std;
int t,n,ok;
int a[10000];
string s;
long long res[501];
vector <string>ans;
void sinh()
{
	int i=s.size()-1;
	while (i>=0 && s[i]== '9')
	{
		s[i]='0';
	--i;
	}
	if (i<=-1) ok=0;
	else s[i]='9';	
}
int main()
{
	
		
		s ="0000000000000";
		ok=1;
		while (ok)
		{
			ans.push_back(s);
			sinh();
		}
		for (int i=1;i<=500;i++)
		{
			for (auto x : ans)
			{
				if (stoll(x) !=0 && (stoll(x) %i == 0))
				{
					res[i] =stoll(x);
					break;
				}
			}
		}
		cin>>t;
		while (t--){
			cin>>n;
			cout<<res[n]<<endl;
	}
}
