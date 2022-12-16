#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int degree(char c)
{
    if(c == '^') return 5;
    if(c == '*' || c == '/') return 4;
    if(c == '+' || c == '-') return 3;
    return 2;
}
string infixToPostfix(string s){
	stack<char>st;
	int n=s.size();
	string res="";
	for(int i=0;i<n;i++){
		if(isalpha(s[i])) res+=s[i];
		else if (s[i] == '(') st.push(s[i]);
		else if (s[i] == ')'){
			while (st.size() && st.top()!= '('){
				res += st.top();
                    st.pop();
			}
			st.pop();
		}
		else if ( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i]=='^'){
			while (!st.empty() && degree( st.top() )>= degree(s[i])){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(st.size())
        {
            if(st.top() != '(') res += st.top();
            st.pop();
        }
        return res;
	}

int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   	string s;cin>>s;
   	cout<<infixToPostfix(s)<<endl;
   }
}  