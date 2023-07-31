#include <bits/stdc++.h>
#include"node.cpp"
#ifndef __slist_iterator__cpp
#define __slist_iterator__cpp
using namespace std;
template<class T>
class slist_iterator{
	node<T> *Curr;
	public:
		slist_iterator(node<T> *c=0){Curr=c;}
		node<T> *&getCurr(){return Curr;}

		T &operator*(){
			 return Curr->getElem();
		}
		bool operator!=(slist_iterator<T> it1){
			return Curr!=it1.getCurr();
		}
		void Next(){
			Curr=Curr->getNext();
		}
		slist_iterator<T> operator++(int){//it++
			Curr=Curr->getNext();
			return Curr;
		}
		slist_iterator<T> operator++(){//++it
			slist_iterator<T> it1 = Curr;
			Curr = Curr->getNext();
			return it1;
		}
};
#endif
int main(){
	node<int> N;
	N.getElem() = 2;
	node<int> *A =  new node<int>(7,&N);
	node<int> *B =  new node<int>(6);
	N.setNext(B);
	cout<<"\nDia chi con tro A: "<<A<<endl;
	cout<<"\nGia tri elem cua A la: "<<A->getElem();
	slist_iterator<int> it;//it(A)
	cout<<"\nDia chi con tro curr cua it: "<<it.getCurr()<<endl;
	it=A;
	cout<<"\nDia chi con tro curr cua it sau khi gan: "<<it.getCurr()<<endl;
	cout<<"\nGia tri elem ma con tro curr cua it dang tro: "<<it.getCurr()->getElem()<<endl;
//	slist_iterator<int> null(NULL);
	for(;it!=NULL;it++) cout<<*it<<" ";//Duyet
}

