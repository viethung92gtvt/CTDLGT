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
		node<T> *&getcurr(){return curr;}

		T &operator*(){
			 return curr->getElem();
		}
		bool operator!=(slist_iterator<T> it1){
			return curr!=it1.getcurr();
		}
		slist_iterator<T> operator++(int){//++it
			curr=curr->getNext();
			return curr;
		}
		slist_iterator<T> operator++(){//it++
			slist_iterator<T> it1 = curr;
			curr = curr->getNext();
			return it1;
		}
};
#endif
//int main(){
//	node<int> N;
//	N.getElem() = 2;
//	node<int> *A =  new node<int>(7,&N);
//	node<int> *B =  new node<int>(6);
//	N.setNext(B);
//	slist_iterator<int> it=A;//it(A)
//	for(;it!=0;it++) cout<<*it<<" ";//Duyet
//}

