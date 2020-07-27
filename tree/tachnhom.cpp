//Tach nhom 
#include <bits/stdc++.h>
using namespace std;
struct node{
	int elem;
	node *Left, *Right;
	node(int x=0, node *L=0,node *R=0){
		elem=x;
		Left = L;
		Right = R;
	}
};
struct tree{
	node *T=0;
	node *create(int n,int k=4){
		if(n>k && (n-k)%2==0) return new node(n,create((n-k)/2,k),create((n+k)/2,k));
		return new node(n);
	}
	void preorder(node *H,string p="\n"){
		if(!H) return;
		cout<<p<<H->elem;
		preorder(H->Left,p+"\t");
		preorder(H->Right,p+"\t");
		
	}
	void inorder(node *H,string p="\n"){
		if(!H) return;
		inorder(H->Left,p+"\t");
		cout<<p<<H->elem;
		inorder(H->Right,p+"\t");
		
	}
	void postorder(node *H,string p="\n"){
		if(!H) return;
		postorder(H->Left,p+"\t");
		postorder(H->Right,p+"\t");
		cout<<p<<H->elem;
	}
	void sol(){
		int n; cin>>n;
		node *T=create(n,4);
		cout<<"\nDuyet tien thu tu:: "; preorder(T);
		cout<<"\nDuyet trung thu tu:: ";inorder(T);
		cout<<"\nDuyet hau thu tu:: ";postorder(T);
	}
};
int main ()
{
  tree Cay; Cay.sol();
  return 0;
}

