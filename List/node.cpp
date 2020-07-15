#include <bits/stdc++.h>
#ifndef __node__cpp__
#define __node__cpp__
using namespace std;
template<class T>
class node{
	T elem;
	node *next;
	public:
		node(){
		}
		node(T x,node<T> *N=NULL){
			elem =x;
			next = N;
		}
		void setelem(T x){
			elem =x;
		}
		void setnext(node<T> *N=NULL){
			next = N;
		}
		T &getelem() {
			return elem;
		}
		node<T> *&getnext(){ 
			return next;
		}
};
#endif
/*int main ()
{
  node<int> A,B(1),C(2,&B);
  B.setnext(&A);
  A.getelem() = 3;
  cout<<A.getelem()<<"\n";
  node<int> *D = new node<int>(4,&C);
  cout<<"\n"<<D->getelem();
   return 0;
}*/

