#include <bits/stdc++.h>
using namespace std;
int k,ok;
char c;
char a[10000000];
void kt()
{
	for (int i=1;i<=k;i++)
	{
		a[i] = 'A';
	}
}
void sinh()
{
int i=k;
while (i>=1 && a[i]== c )
{
	--i;
}
if (i ==0) ok=0;
else {
	a[i]++;
	for (int j=i+1;j<=k;j++) a[j]=a[i];
}
}
int main()
{
	cin>>c>>k;
	
	kt();
	ok=1;

	while (ok)
	{
		for (int i=1;i<=k;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
	
}
