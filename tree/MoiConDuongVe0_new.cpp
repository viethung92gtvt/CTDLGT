//Moi con duong ve 0
#include <bits/stdc++.h>
using namespace std;
struct node{
	int elem;
	vector<node *> child;
	node *parent;
	node(int x=0,node *p=0){
		elem=x;
		parent = p;
	}
};
node *P[1000]={};//Danh dau quan ly node cuoi cung dat chan den do
node *create(int n,node *p=0)//Ham tao ra 1 cay tu so nguyen n
{
	node *T = new node(n,p);
	for(int a=1;a*a<=n;a++){
		if(n%a==0){
			int m = (a-1)*(n/a+1);
			if(P[m]==0){
				T->child.push_back(P[m]=create(m,T));
			}
		}
	}
	return T;
	
}
void induong(node *p){
	if(p->parent){
		induong(p->parent); cout<<"->"<<p->elem;
	}
	else cout<<p->elem;
}
int main ()
{
  node *T=create(30);
  
 int f=1;
 while(f){
 	cout<<"\nNhap vao f: "; cin>>f;
 	if(P[f]) induong(P[f]);
 	else cout<<"Ko co duong di den "<<f;
 }
  return 0;
}

