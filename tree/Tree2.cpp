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
	void preOrder(TreeNode<T>*,void (*visit)(TreeNode<T>*));
	void inOrder(TreeNode<T>*,void (*visit)(TreeNode<T>*));
	void postOrder(TreeNode<T>*,void (*visit)(TreeNode<T>*));
	TreeNode<T>* insert(TreeNode<T>*,int,T);
	void remove(TreeNode<T>*);
};
template <class T>
void Tree<T>::inOrder(TreeNode<T>* v, 
                        void (*visit)(TreeNode<T>* a)){
	 if(v!=NULL){
        inOrder(v->getLeft(),visit);
        visit(v);
        inOrder(v->getRight(),visit);
    }
}     
template <class T>
void Tree<T>::postOrder(TreeNode<T>* v, 
                       void (*visit)(TreeNode<T>* a)){
     if(v!=NULL){
         postOrder(v->getLeft(),visit);
         postOrder(v->getRight(),visit);
         visit(v);
     }
}     
template <class T>
void Tree<T>::preOrder(TreeNode<T>* v,
                       void (*visit)(TreeNode<T>* a)){
     if(v!=NULL){
         visit(v);
         preOrder(v->getLeft(),visit);
         preOrder(v->getRight(),visit);
     }
}     
template <class T>
TreeNode<T>* Tree<T>::insert(TreeNode<T>* parent, 
                                      int LeftRight,T elem){
     TreeNode<T>* p = new TreeNode<T> ;
     p->setParent(parent);
     p->setElem(elem);
     if (parent==NULL)
        root = p;
     else
        if(LeftRight==1) 
           parent->setRight(p);
        else 
		   parent->setLeft(p);
     n++;
     return p;
}
template <class T>
void Tree<T>::remove(TreeNode<T>*v){
	  if(v!=NULL){
		  remove(v->getLeft());
		  remove(v->getRight());
		  delete v;
     }
}
int main ()
{

  return 0;
}


