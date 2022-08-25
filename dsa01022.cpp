#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int n){
	for(int i=0;i<n;i++)
	{
		if(a[i] !=b[i]) return false;
	}
	return true;
}


int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[10000],b[10000];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) b[i]=i+1;
		int c=1;
		do{
			if (check(a,b,n))
			{
				cout<<c<<endl;
			}
			c++;
		}while(next_permutation(b,b+n));
	}
}
