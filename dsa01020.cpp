#include <bits/stdc++.h>
using namespace std;
 

string previousNumber(string s)
{
    int i = s.size()-1;
	while (i>=0 && s[i]=='0'){
		s[i]='1';
		--i;
	}
	if (i==-1)
	{
		for(int i=1;i<s.length();i++)
		{
			s[i]='1';
			break;
		}
	}
	else
	{
		s[i]='0';
	}
	return s;
}

int main()
{
	int t;cin>>t;while (t--){
		string num;
    	cin>>num;
    	cout << previousNumber(num)<<endl;
	}
}
