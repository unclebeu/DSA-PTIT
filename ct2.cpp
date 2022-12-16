#include <bits/stdc++.h>
using namespace std;
int n,s,sum=0,a[10000],m[10000],ok,res[10000];
vector <string>v;
void kt(){
	for (int i=1;i<=n;i++)
	{
		a[i]=0;
	}
}
void sinh()
{
	int i=n;
	while (i>=1 && a[i]==1)
	{
		a[i]=0;
		-i;
	}
	if (i==0) ok=0;
	else a[i] =1;
}

int main()
{
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>m[i];
	kt();
	ok=1;
	while(ok)
	{
		sum=0;
		string tmp;
		for (int i=1;i<=n;i++)
		{
			sum+=m[a[i]];
		}
		if(sum==s)
		{
			for(int i=1;i<=n;i++){
			
			tmp+=to_string(m[a[i]]);
			tmp+=" ";
		
		v.push_back(tmp);
		}
		}
		else
		{
			sinh();
			sum-=m[a[i]];
		}
		
	}
	for(auto x:res)
	{
		cout<<x<<endl;
	}
	
}
