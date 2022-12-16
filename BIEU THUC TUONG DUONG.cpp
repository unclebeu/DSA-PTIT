#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string sol(string s){
	stack<char>st1,st2;
	s='+' +s;
	st2.push('+');
	for(auto &x:s){
		if (isalpha(x)) st1.push(x);
		else{
			if(x == '+' || x== '-'){
				if(st2.top() == '+'){
					st1.push(x);
				}
				else st1.push((x=='+')? '-' : '+');
			}
			if( x =='(') {
				st2.push(st1.top());
			}
			else if( x ==')'){
				st2.pop();
			}
		}
	}
	string res="";
	while(st1.size()>1){
		res= st1.top()+res;
		st1.pop();
	}
	return res;
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t ;cin>>t;while(t--){
   	string s;cin>>s;
   	cout<<sol(s)<<endl;
   }
}  