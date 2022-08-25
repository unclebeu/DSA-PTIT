#include <bits/stdc++.h>
using namespace std;
int t,n,m,ok;
int a[100][100];
//string s="";
void bt(int i,int j)
{
	
	if (i==m && j==n)
	{
	++ok;
	return;
	}
	if(i+1<=m )
	{
		bt(i+1,j);
		
	}
	if(j+1<=n )
	{
		bt(i,j+1);
		
	}
	
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>m>>n;
		for (int i=1;i<=m;i++) 
		{
			for (int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		ok=0;
	    bt(1,1);
		cout<<ok<<endl;
	}
}
