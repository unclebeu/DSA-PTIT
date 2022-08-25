#include <bits/stdc++.h>
using namespace std;
int t,n,a[1000000],ok;
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
	while (i>=1 && a[i]== 1)
	{
		a[i]=0;
		--i;
		
	}
	if (i == 0) ok=0;
	else 
	{
		a[i]=1;
	}
}
bool check()
{
	if (a[1] != 0 || a[n] != 1) return false;
	for (int i=1;i<n;i++){
		if (a[i] == 0 && a[i+1] == 0) return false;
	}
	return true;
}
 int main()
 {
         cin>>t;while (t--)
         {
         	cin>>n;
         	
			ok=true;
			kt();
			while (ok)
			{
				if (check())
				{
					for(int i=1;i<=n;i++)
					{
					 	if (a[i]==0) cout<<"H";
						else cout<<"A";
					}
					cout<<endl;
				}
				sinh();
			}
		
		 }
 }
