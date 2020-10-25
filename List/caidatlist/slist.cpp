#include <bits/stdc++.h>
#include"node.cpp"
#include"slist_iterator.cpp"
#ifndef __node__cpp
#define __node__cpp
using namespace std;

template<class T>
class slist{
	node<T> *head,*trail;
	int num;
	public:
		slist(){
			head=trail=nullptr;
			num=0;
		}
		slist(int k, T x){
			while(k--){
				push_back(x);
			}
		}
		int size(){return num;}
		bool empty(){return num==0;}
		T &front(){return head->getElem();}
		T &back(){return trail->getElem();}
		void push_back(T x){
			//TH1: Neu danh sach chua co gi
			if(num==0){
				head=trail=new node<T>(x);
			}
			//TH 2: Neu danh sach da co
			else{
				trail->setNext(new node<T>(x));
				trail=trail->getNext();
			}
			num++;
		}
		void push_front(T x){
			//TH1: Neu danh sach chua co gi
			if(num==0) head=trail=new node<T>(x);
			else head=new node<T>(x,head);
			num++;
		}
		void pop_front(){
			if(num==0) return;
			head=head->getNext();
			num--;
			if(num==0) trail=NULL;
		}
		void pop_back(){
			if(num==0) return;
			if(num==1){
				head=trail=0;
			}else{
				node<T> *p=head;
				while(p->getNext()!=trail) p=p->getNext();
				p->setNext(0);
				trail=p;
			}
			num--;
		}
		typedef slist_iterator<T> iterator;
		iterator begin(){return head;}
		iterator end(){return trail->getNext();}
};
#endif
//int main ()
//{
//
//  return 0;
//}

