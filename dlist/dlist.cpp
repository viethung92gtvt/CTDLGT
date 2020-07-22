#include <bits/stdc++.h>
#include "node.cpp"
#include "dlist_iterator.cpp"
using namespace std;
#ifndef __dlist__cpp__
#define __dlist__cpp__
template <class T>
class dlist{
	node<T> *head,*tail;
	unsigned int num;
	public:
		typedef dlist_iterator<T> iterator;
		typedef dlist_reverse_iterator<T> reverse_iterator;
		dlist(){num=0;head=tail=nullptr;}
		dlist(int k,T x){num=0;head=tail=nullptr;while(k--) push_back(x);}//Tao list k phan tu bang x
		bool empty(){ return num==0;}
		unsigned size(){return num;}
		reverse_iterator rbegin(){
			return tail;
		}
		reverse_iterator rend(){
			return NULL;
		}
		iterator begin(){
			return head;
		}
		iterator end(){
			return NULL;
		}
		void push_back(T x){
			if(num==0) head=tail=new node<T>(x);
			else {
				tail->setnext(new node<T>(x,tail,0));
				tail = tail->getnext();
			}
			num++;
		}
		void push_front(T x){
			if(num==0) head=tail=new node<T>(x);
			else {
				head->setprev(new node<T>(x,0,head));
				head = head->getprev();
			}
			num++;
		}
		T &front(){return head->getelem();}
		T &back(){return tail->getelem();}
		void pop_back(){
			if(num==0) return;
			if(num==1) head=tail=nullptr;
			else{
				tail=tail->getprev();
				tail->setnext(NULL);
			}
			num--;
		}
		void pop_front(){
			if(num==0) return;
			if(num==1) head=tail=nullptr;
			else{
				head=head->getnext();
				head->setprev(0);
			}
			num--;
		}
		void erase(iterator it)
		{
			if(it.getcurr()==head) return pop_front();
			if(it.getcurr()==tail) return pop_back();
			node<T>*L=it.getcurr()->getprev(),*R=it.getcurr()->getnext();
			L->setnext(R); R->setprev(L);
			num--;
		}
};
#endif
