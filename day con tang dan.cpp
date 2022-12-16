#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000],x[1000];
vector<string>v;
void bt(int i,int pos)
{
	if (i>=2)
	{
		string res="";
		for (int j=0; j<i ;j++)
		{
			res += to_string(x[j]) +" ";
		}
		v.push_back(res);
	}
	for (int j=pos;j<n;j++)
	{
		if (a[j] >x[i-1])
		{
			x[i] =a[j];
			bt(i+1,j+1);
		}
	}
}


int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin >>a[i];
	bt(0,0);
	sort(v.begin(),v.end());
	for (auto x:v)
	{
		cout<<x<<endl;
	}
}
