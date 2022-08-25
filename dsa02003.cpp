#include <bits/stdc++.h>
using namespace std;
int t,n,ok;
int a[100][100];
string s="";
void bt(int i,int j)
{
	
	if (i==n && j==n)
	{
		cout<<s<<" ";
		ok=1;
	}
	if(i+1<=n && a[i+1][j]==1)
	{
		s+="D";
		a[i+1][j]=0;
		bt(i+1,j);
		s.pop_back();
		a[i+1][j]=1;
	}
	if(j+1<=n && a[i][j+1] == 1 )
	{
		s+="R";
		a[i][j+1]=0;
		bt(i,j+1);
		s.pop_back();
		a[i][j+1]=1;
	}
	
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for (int i=1;i<=n;i++) 
		{
			for (int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		ok=0;
		if(a[1][1] && a[n][n]){
			bt(1,1);
		}
		if(ok) cout<<"\n";
		else cout<<"-1\n";
	}
}
