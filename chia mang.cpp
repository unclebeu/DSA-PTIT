#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[10000];
int sum,ok=0;
void bt(int i,int pos,int tong,int dem){
	if (dem == k)
	{
		ok=true;return;
	}	
	for (int j=pos;j<=n;j++)
	{
		tong+=a[j];
		if (tong == sum)
		{
			bt(i+1,j+1,0,dem+1);
		}
		else if (tong<sum)
		{
			bt(i+1,j+1,tong,dem);
		}
	}
}

void nhap()
{
	cin>>n>>k;
	for (int i=1;i<=n;i++)
	{
	  cin>>a[i];
	  sum+=a[i];
	}
	if(sum % k != 0){
	 cout<<"0"<<endl;
	 return;
	}
	else{
	
	sum/=k;
	bt(1,1,0,0);	
	cout<<ok<<endl;
}
}


int main()
{
//	cin>>t;while(t--)
//	{
		nhap();
		
//	}
}
