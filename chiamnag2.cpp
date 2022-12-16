#include<bits/stdc++.h>
using namespace std;
int t;
int n , k , sum , a[200] ; bool ok ; int used[200] ;
void bt(int tong,int dem){
	if (ok==true) return ;
	if (dem ==k)
	{
		ok=true;
		return;
	}
	for (int j=1;j<=n;j++)
	{
		if(used[j])
		{
			used[j]=0;
			//tong+=used[j];
			if (tong == sum)
			{
				bt(0,dem+1);
				return;
			}
			if (tong >sum) return ;
			else bt(tong+a[j],dem);
		}
		used[j]=1;
	}
}

void nhap()
{
	cin>>n>>k;
	memset(used , 1 ,sizeof(used));
	sum=0;
	ok=false;
	for (int i=1;i<=n;i++)
	{
	  cin>>a[i];
	  sum+=a[i];
	}
	if(sum % k != 0){
	 cout<<0<<endl;
	 return;
	}
	else{
	
	sum/=k;
	bt(0,0);	
	if(ok==true) cout<<1<<endl;
	else cout<<0<<endl;
}
}


int main()
{
	cin>>t;while(t--)
	{
		nhap();
		
	}
}

