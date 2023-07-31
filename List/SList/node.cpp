//cai dat node
#include <iostream>
#ifndef NODE_CPP
#define NODE_CPP
using namespace std;
template<class T>
class Node{
	
	private:
		T elem;			//Doi tuong luu tru du lieu cua node
		Node<T> *next;	//Con tro luu dia chi cua node tiep theo
	public:
		Node<T>(T x,Node<T> *N=NULL){//Ham tao co doi mac dinh
			elem = x;
			next = N;
		}
		T getElem(){ return elem;}				//Tra ve doi tuong luu tru du lieu cua Node
		void setElem(T x){ elem = x;}			// Dat thay the doi tuong luu trong Node bang doi tuong moi
		Node<T> *getNext(){return next;}		// Tra ve con tro luu dia chi cua Node tiep theo
		void setNext(Node<T> *N){ next = N;}	// Gan gia tri con tro next bang gia tri N
};
#endif
int main(){
	Node<int> N(2);
	Node<int> *A =  new Node<int>(7,&N);
	Node<int> *B =  new Node<int>(6);
	N.setNext(B);
	for(Node<int> *p=A;p!=0;p=p->getNext()) cout<<p->getElem()<<" ";//Duyet
}
