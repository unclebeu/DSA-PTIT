#include <bits/stdc++.h>
using namespace std;
int t,n;
char c;
char res[1000];
int used[1000];
char 
void bt(int i)
{
	for (char j='A';j<=c;j++)
	{	
		if(used[j]==0)
		{
			res[i] =j;
			used[j]=1;
			if (i==n)
			{
				for (int i=1;i<=n;i++)
				{
					if(res[i]=='A' && res[i-1] 
					{
						
					}
				}
			}
			else bt(i+1);
			used[j]=0;
		}
	}
}
int main()
{
	
		cin>>c;
		n=c-'A'+1;
		bt(1);
	
}
