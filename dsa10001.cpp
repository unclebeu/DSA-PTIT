#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;while (t--)
	{
		string s;
		cin>>s;
		if (next_permutation(s.begin(),s.end()))
		{
			cout<<s<<endl;
		}
		/*
		else 
		{
			for(int i=0;i<s.length();i++)
			{
				s[i]='0';
			}
			cout<<s<<endl;
		}
		*/
		
	}
}
