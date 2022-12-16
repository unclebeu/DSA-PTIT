#include <bits/stdc++.h>
using namespace std;
int t,n,ok;
int a[10000];
void kt()
{
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
		--i;
	}
	if (i==0) ok=0;
	else 
	{
		a[i]=1;
	}
}
bool check(){
	if(a[1]!=1 || a[n]!=0)
		return false;
	for(int i=1;i<n;i++){
		if(a[i]==1 && a[i+1]==1)
			return false;
	}
	return true;
}
 int main()
 {
         cin>>t;while (t--)
         {
         	cin>>n;
         	int w[100];
         	long long sum=0;
         	for (int i=1;i<=n;i++) cin>>w[i];
         	long long ans=1000000;
         	
			ok=true;
			kt();
			while (ok)
			{
				long long sum1=0,sum2=0;
				for (int i=1;i<=n;i++)
				{
					if (a[i] ==1 )
					{
						sum2+=w[i];
					}
					else sum1+=w[i];
				}
				ans=min(ans,abs(sum2-sum1));
				sinh();
				
			}
			cout<<ans<<endl;
		}
 }
