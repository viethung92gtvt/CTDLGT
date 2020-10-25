#include <bits/stdc++.h>
#include"node.cpp"
#ifndef __slist_iterator__cpp
#define __slist_iterator__cpp
using namespace std;
template<class T>
class slist_iterator{
	node<T> *curr;
	public:
		slist_iterator(node<T> *c=0){curr=c;}
		T &*getcurr(){return curr;}
		slist_iterator &operator=(slist_iterator<T> it1){
			this->curr = it1.getcurr(); return *this;
		}
		T &operator*(){ return curr->getElem();}
		bool operator!=(slist_iterator<T> it1){
			return curr!=it1.getcurr();
		}
		slist_iterator<T> operator++(int){
			curr=curr->getNext();
			return curr;
		}
		slist_iterator<T> operator++(){
			slist_iterator<T> it1 = curr;
			curr = curr->getNext();
			return it1;
		}
};
#endif
//int main ()
//{
//
//  return 0;
//}

