//Moi con duong ve 0
#include <bits/stdc++.h>
using namespace std;
template<class T>
struct node{
	T elem;
	vector<node *> child;
	node(T x=0){
		elem=x;
	}
};

node<int> *create(int n)//Ham tao ra 1 cay tu so nguyen n
{
	node<int> *T = new node<int>(n);
	for(int a=1;a*a<=n;a++){
		if(n%a==0){
			T->child.push_back(create((a-1)*(n/a+1)));
		}
	}
	return T;
}
//Duyet tien thu tu
void preorder(node<int> *T,string p="\n"){
	if(T==0) return;
	cout<<p<<T->elem;
	for(auto z:T->child) preorder(z,p+"\t");
}
//Duyet hau thu tu
void postorder(node<int> *T,string p="\n"){
	if(T==0) return;
	for(auto z:T->child) postorder(z,p+"\t");
	cout<<p<<T->elem;
}
//Duyet trung thu tu
void inorder(node<int> *T,string p="\n"){
	if(T==0) return;
	if(T->child.size()>0) inorder(T->child[0],p+"\t");//Duyet con truong
	cout<<p<<T->elem;
	for(int i=1;i<T->child.size();i++) inorder(T->child[i],p+"\t");//cac con con lai
}
int main ()
{
 // node *To = new node(30);
  //node *Ong = new node(30);
 // node *To = new node(30);
  node<int> *T=create(12);
  
  //Duyet tien thu tu
  cout<<"\nDuyet tien thu tu:\n";
  preorder(T);
  //Duyet hau thu tu
  cout<<"\nDuyet hau thu tu:\n";
  postorder(T);
  //Duyet trung thu tu
  cout<<"\nDuyet trung thu tu:\n";
  inorder(T);
  return 0;
}

