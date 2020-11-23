#include <bits/stdc++.h>
using namespace std;
template <class T>
class TreeNode{
	private:
		T elem;
	    TreeNode *parent;
	    vector<TreeNode*> Childs;
	public:
		TreeNode(T x=0){
		elem=x;
		parent=0;
		}
		TreeNode *getParent(){	return parent;	}
		vector<TreeNode*> &getChilds(){return Childs;}
		void setParent(TreeNode *p){ parent = p ;}
		void setChilds(vector<TreeNode*> child){ Childs = child;}
		void setElem(T element){ elem = element ; }
		T getElem(){ return elem ; }
        int hasChild(){ return Childs.size() != 0; }
};

void preorder(TreeNode<int> *Root,string p="\n"){
			if(Root==0) return;
			cout<<p<<Root->getElem();
			for(auto z:Root->getChilds()) preorder(z,p+"\t");
}

int main ()
{
	TreeNode<int> *A = new TreeNode<int>(10);//Goc
	TreeNode<int> *B = new TreeNode<int>(15);//Con A
	TreeNode<int> *C = new TreeNode<int>(20);//Con A
	A->getChilds().push_back(B);
	A->getChilds().push_back(C);
	B->setParent(A);
	C->setParent(A);
	TreeNode<int> *D = new TreeNode<int>(30);//Con B
	B->getChilds().push_back(D);
	D->setParent(B);
	TreeNode<int> *E = new TreeNode<int>(40);//Con B
	B->getChilds().push_back(E);
	E->setParent(B);
	TreeNode<int> *F = new TreeNode<int>(50);//Con C
	C->getChilds().push_back(F);
	F->setParent(C);
	preorder(A);
  return 0;
}

