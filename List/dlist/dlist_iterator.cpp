#include <bits/stdc++.h>
#include "node.cpp"
#ifndef __dlist_iterator__cpp__
#define __dlist_iterator__cpp__
using namespace std;
template<class T>
class dlist_iterator
{
	node<T> *curr;
	public:
		dlist_iterator(node<T> *c=0){curr=c;}
		node<T> *getcurr(){return curr;}
		bool operator!=(dlist_iterator<T> it){return curr!=it.getcurr();}
		//Nap chong toan tu * de lay gia tri elem ma curr dang tro
		T &operator*(){
			return curr->getelem();
		}
		dlist_iterator operator++(int){//curr++
			dlist_iterator it=curr;curr=curr->getnext(); return it;
		}
		dlist_iterator operator++(){//++curr
			curr=curr->getnext(); return curr;
		}
};
template<class T>
class dlist_reverse_iterator
{
	node<T> *curr;
	public:
		dlist_reverse_iterator(node<T> *c=0){curr=c;}
		node<T> *getcurr(){return curr;}
		dlist_reverse_iterator &operator=(dlist_reverse_iterator<T> it){
			this->curr=it.getcurr(); return *this;
		}
		bool operator!=(dlist_reverse_iterator<T> it){return curr!=it.getcurr();}
		T &operator*(){
			return curr->getelem();
		}
		dlist_reverse_iterator operator++(int){//curr++
			dlist_reverse_iterator it=curr;curr=curr->getprev(); return it;
		}
		dlist_reverse_iterator operator++(){//++curr
			curr=curr->getprev(); return curr;
		}
};
#endif

//int main(){
//	node<int> N(2);
//	node<int> *A = new node<int>(7,0,&N);
//	N.setprev(A);
//	node<int> C(8,0,A);
//	A->setprev(&C);
//	node<int> *B = new node<int>(6,0,&C);
//	C.setprev(B);
////	node<int> *p=B;
////	while(p!=NULL){
////
////		cout<<p->getelem()<<" ";
////		p=p->getnext();
////	}
//cout<<"Duyet xuoi:\n";
//dlist_iterator<int> it = B;
//for(;it!=NULL;it++)
//cout<<*it<<" ";
//
//cout<<"\nDuyet nguoc: ";
//dlist_reverse_iterator<int> rit = &N;
//for(;rit!=NULL;rit++) cout<<*rit<<" ";
//}
