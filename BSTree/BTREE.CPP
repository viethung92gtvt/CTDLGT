#ifndef BTREE_H
#define BTREE_H 1
#include<iostream>
#include"BNode.cpp"
using namespace std;
template <class Keys, class T>
class BTree{
	private:
		BNode<Keys,T> *root;
		long count;	   
		void inOrder(BNode<Keys,T>*,BNode<Keys,T>*&first,int &kt);
		void remove(BNode<Keys,T>*&);
	public:
		BTree();
		BNode<Keys,T> *getRoot();
		int size();
		int isEmpty();
		int isInternal(BNode<Keys,T>*);
		int isExternal(BNode<Keys,T>*);
		int isRoot(BNode<Keys,T>*);
		void preOrder(BNode<Keys,T>*, void (*visit)(BNode<Keys,T>*));
		void inOrder(BNode<Keys,T>*, void (*visit)(BNode<Keys,T>*));
		void postOrder(BNode<Keys,T>*,void (*visit)(BNode<Keys,T>*));
		BNode<Keys,T>*search(Keys, BNode<Keys,T>*);
		BNode<Keys,T>* insert(Keys, T);        
		void  remove(Keys);
};
//------------------ Cai dat cac phuong thuc --------------
template <class Keys, class T>
BTree<Keys,T>::BTree()
{
	root = NULL;
	count=0;
}
template <class Keys, class T>
BNode<Keys,T>* BTree<Keys,T>::getRoot()
{
	  return root;

}
template <class Keys, class T>
int BTree<Keys,T>::size()
{
	 return count;
}
template <class Keys, class T>
int BTree<Keys,T>::isEmpty()
{
	 if(root==NULL)
		  return 1;
	 else
		  return 0;
}
template <class Keys, class T>
int BTree<Keys,T>::isInternal(BNode<Keys,T>* p)
{
	 if(p->hasLeft()||p->hasRight())
		 return 1;
	 else
		 return 0;
}
template <class Keys, class T>
int BTree<Keys,T>::isExternal(BNode<Keys,T>*p)
{
	 if(!p->hasLeft() && !p->hasRight())
		 return 1;
	 else
		 return 0;

}
template <class Keys, class T>
int BTree<Keys,T>::isRoot(BNode<Keys,T>* p)
{
	 if(p->getParent()==NULL)
		 return 1;
	 else
		 return 0;
}
template <class Keys, class T>
void BTree<Keys,T>::preOrder(BNode<Keys,T>*p, void (*visit)(BNode<Keys,T>*))
{
	  if(p!=NULL)
	  {
			 visit(p);
			 preOrder(p->getLeft(),visit);
			 preOrder(p->getRight(),visit);
	  }
}
template <class Keys, class T>
void BTree<Keys,T>::inOrder(BNode<Keys,T>*p, void (*visit)(BNode<Keys,T>*))
{
	  if(p!=NULL)
	  {
			inOrder(p->getLeft(),visit);
			visit(p);
			inOrder(p->getRight(),visit);
	  }
}
template <class Keys, class T>
void BTree<Keys,T>::postOrder(BNode<Keys,T>*p, void (*visit)(BNode<Keys,T>*))
{
	  if(p!=NULL)
	  {
			postOrder(p->getLeft(),visit);
			postOrder(p->getRight(),visit);
			visit(p);
	  }
}
template <class Keys, class T>
BNode<Keys,T>* BTree<Keys,T>::search(Keys key, BNode<Keys,T>* p)
{
		if(p!=NULL)
		{
			if(p->getKey()>key)
				return search(key,p->getLeft());
			else
				if(p->getKey()<key)
					return search(key,p->getRight());
				else
					 return p;
		}
		else
			return NULL;
}
template <class Keys, class T>
BNode<Keys,T>* BTree<Keys,T>::insert(Keys key, T elem)
{
	 BNode<Keys, T>*p;
	 BNode<Keys, T>*q = new BNode<Keys, T>();
	 q->setKey(key);
	 q->setElem(elem);
	 if(root==NULL)
	 {
		  root = q;
		  count++;
	 }
	 else
	 {
		 p = root;
		 while(p != NULL)
		 {
			  	if(key< p->getKey())
				  if(p->getLeft()==NULL)
				  {
					  q->setParent(p);
					  p->setLeft(q);
					  count++;
					  p = NULL; //dat p=Null de ket th�c
				  }
				  else
					  p = p->getLeft();
			else 
				if(key> p->getKey())  // nam ben cay con ben phai
						if(p->getRight()== NULL)
						{
							 q->setParent(p);
							 p->setRight(q);
							 count++;
							 p = NULL;
						}
						else
							 p = p->getRight();
			else
				{
					delete q;
					p=NULL;
				}
		  }
    }
    return q;    
}
template <class Keys, class T>
void BTree<Keys,T>::inOrder(BNode<Keys,T> *p, BNode<Keys,T> *&first, int &kt)
{
	if(p!=NULL && kt!=1)
	{
		inOrder(p->getLeft(),first, kt);
		if(kt==0)
		{
			first = p;
			kt=1;
		}
		inOrder(p->getRight(),first, kt);
	}
}

template <class Keys, class T>
void BTree<Keys,T>::remove(BNode<Keys,T> *&v)
{
	BNode<Keys,T> *p;
	if (!v->hasLeft() && !v->hasRight())
	{
        p=v->getParent();
        if(p!=NULL)
           if(v == p->getLeft())
              p->setLeft(NULL);
           else
              p->setRight(NULL);     
    }
	if(v->hasLeft() && !v->hasRight())
	{
		p=v->getParent();
		if(p!=NULL){
				v->getLeft()->setParent(p);
			if(p->getLeft()==v)
				p->setLeft(v->getLeft());
			else
				p->setRight(v->getLeft());
		}
	}
	if((!v->hasLeft()) && v->hasRight())
	{
		p=v->getParent();
		if(p!=NULL){
			v->getRight()->setParent(p);
			if(p->getLeft()==v)
				p->setLeft(v->getRight());
			else
				p->setRight(v->getRight());
		}
	}
	if(v==root){
		if(root->hasLeft())
        	root = root->getLeft();
		else if(root->hasRight()) 
			root = root->getRight();
		else root = NULL;
	}
   	delete v;	
}
template <class Keys, class T>
void  BTree<Keys,T>::remove(Keys key)
{
	BNode<Keys,T>*v = search(key, root);
	if(v==NULL) return;
	if(v->hasLeft()&& v->hasRight())//C� ca hai con
	{
		BNode<Keys,T> *first;
		int kt=0;
		inOrder(v->getRight(), first, kt);
		v->setKey(first->getKey());
		v->setElem(first->getElem());
		remove(first);
    }
	else
	{	
        remove(v);

	}
}

#endif
