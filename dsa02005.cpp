#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int mangvitri[1000],res[1000];
bool used[1000];
void bt(int i)
{
	for(int j=0;j<s.length();j++)
	{
		if(!used[j])
		{
			mangvitri[i]=j;
			used[j]=true;
			if(i==s.length()-1)
			{
				for(int l=0;l<s.length();l++)
				{
					cout<<s[mangvitri[l]];
				}
				cout<<" ";
			}
			else
			
				bt(i+1);
				used[j]=false;
			
		}
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		memset(used,false,sizeof(used));
		bt(0);
		cout<<endl;
	}
}
