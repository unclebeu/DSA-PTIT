#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve();
struct node {
	int data;
	node *left;
	node *right;
	node (int x){
		data =x;
		right=left=NULL;
	}
};
void makeroot(node *root , int u , int v , char c)
{
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void insertNode (node *root ,int u,int v,char c){
	if (root ==NULL) return;
	if (root->data == u){
		makeroot(root,u,v,c);
	}
	else {
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}
void inOrder(node *root){
	if (root == NULL) return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);

}
void BFS(node *root)
{
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        node *f = Q.front(); Q.pop();
        cout << f->data << " ";
        if(f->left != NULL) Q.push(f->left);
        if(f->right != NULL) Q.push(f->right);
    }
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;cin>>t;while(t--){
   	int n;
   	cin>>n;
   	
   	
   	node *root =NULL;
   	for (int i=0;i<n;i++){
   		int u,v;
   		char c;
   		cin>>u>>v>>c;
   		if (root ==NULL){
   			root= new node(u);
   			makeroot(root,u,v,c);
   		}
   		else {
   			insertNode(root,u,v,c);
   		}
   	}
   	//inOrder(root);
   	BFS(root);
   	cout<<endl;
   }
}  