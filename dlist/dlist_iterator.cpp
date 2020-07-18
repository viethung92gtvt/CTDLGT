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
//		dlist_iterator &operator=(dlist_iterator<T> it){
//			this->curr=it.getcurr(); return *this;
//		}
		bool operator!=(dlist_iterator<T> it){return curr!=it.getcurr();}
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

