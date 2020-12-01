#include "conio.h"
#include "Btree.cpp"
#include "iostream"
using namespace std;
void visit(BNode<int,string>*p)
{
	  cout<<p->getElem()<<"  ";	
}
int main(){
	BTree<int,string> tree;
	BNode<int,string> *p;
	tree.insert(100,"100");
	tree.insert(70,"70");
	tree.insert(150,"150");
	tree.insert(120,"120");
	cout<<"\nDuyet cay theo thu tu giua:";	
	tree.inOrder(tree.getRoot(),visit);
    cout<<"\n";
	p = tree.search(100, tree.getRoot());
	if(p!=NULL)
	  cout<<"Tim thay khoa 100, Co gia tri "<<p->getElem();
	else
	  cout<<"Khong tim thay khoa 100.";
  //  tree.remove(120);
  //  tree.remove(100);
    tree.remove(100);    
    cout<<"\nDuyet cay theo thu tu giua:";
   	tree.inOrder(tree.getRoot(),visit);
	return 0;
}

