#include <bits/stdc++.h>
using namespace std;
int n,ok;
string s;
void kt()
{
	s=string(n,'6');
}
void sinh()
{
	int i=n-1;
	while (i>=0 && s[i]=='8')
	{
		s[i]='6';
		--i;
	}
	if (i==-1) ok=0;
	else 
	{
		s[i]='8';
	}
}
bool check()
{
	
	if (s[0]=='6' || s[n-1]=='8') return false;
	if (s.find("88")!= string::npos) return false;
	if (s.find("6666")!= string::npos) return false;
	return true;
}
int main()
{
	cin>>n;
	kt();
	
	ok=1;while(ok)
	{
		if(check())
		{
			cout<<s<<endl;	
		}
		sinh();
	}
}
