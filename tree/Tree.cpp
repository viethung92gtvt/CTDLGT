#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;
template <class T>
class Tree {
private:
	TreeNode<T>* root;
	int n;
public:
    Tree(){ root=NULL;  n=0;}
	TreeNode<T> *&getRoot(){ return root;}
	int isEmpty(){
        return root==NULL;
    }           
	int size(){return n;}
	int isInternal(TreeNode<T>*v){
	   return(v->hasChild()) ;           
    }
	int isExternal(TreeNode<T>*v) {
	    return (!v->hasChild()) ;           
	}
	int isRoot(TreeNode<T>*v){
		return v->getParent()==NULL;           
	}
		//Duyet Tien thu tu
	void preOrder(TreeNode<int> *Root,string p="\n"){
				if(Root==0) return;
				cout<<p<<Root->getElem();
				for(auto z:Root->getChild()) preOrder(z,p+"\t");
	}
	//Duyet Hau thu tu
	void postOrder(TreeNode<int> *Root,string p="\n"){
				if(Root==0) return;
				for(auto z:Root->getChild()) postOrder(z,p+"\t");
				cout<<p<<Root->getElem();
	}
	//Duyet Trung thu tu
	void inOrder(TreeNode<int> *Root,string p="\n"){
				if(Root==0) return;
				if(Root->hasChild()){
					inOrder(Root->getChild()[0],p+"\t");
				}
				cout<<p<<Root->getElem();
				for(int i=1;i<Root->getChild().size();i++) inOrder(Root->getChild()[i],p+"\t");
	}
	//Duong di tu nut s den nut f
	void path(TreeNode<int> *s, TreeNode<int> *f){
		if(s==f) cout<<s->getElem()<<" ";
		else{
			path(s,f->getParent());
			cout<<f->getElem()<<" ";
		}
	}
	//chieu cao cua cay
	int high(TreeNode<int> *Root){
		if(Root->getChild().size()){
			int max = 0;
			for(auto z:Root->getChild()){
				int h = high(z);
				if(max<h) max  =h;
			}
			return max+1;
		}
		return 0;
	}
	TreeNode<T>* insert(TreeNode<T> *parent,T elem){
     TreeNode<T>* p = new TreeNode<T> ;
     p->setParent(parent);
     p->setElem(elem);
     parent->insertChild(p);
     if (parent==NULL)
        root = p;
     n++;
     return p;
}
//	void remove(TreeNode<T>*);
};
int main ()
{
	 Tree<int> tree;
      TreeNode<int> *p;
	  //Tao cay
	  p = tree.insert(NULL, 100);
	  cout<<tree.size();
//	  p = tree.insert(tree.getRoot(), 10);
//	  tree.insert(p, 8);
//	  tree.insert(p, 6);
//      p = tree.insert(tree.getRoot(),20);
//	  //Duyet cay
//	  cout<<"\n Duyet theo thu tu truoc:";
//	  tree.preOrder(tree.getRoot());
//	  cout<<"\n Duyet theo thu tu giua:";
//	  tree.inOrder(tree.getRoot());
//	  cout<<"\n Duyet theo thu tu sau:";
//	  tree.postOrder(tree.getRoot());
	  
  return 0;
}


