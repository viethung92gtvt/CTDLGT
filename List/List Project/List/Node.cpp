#include <iostream>
#ifndef NODE_CPP
#define NODE_CPP
using namespace std;
template<class Element>
class Node{
	
	private:
		Element elem;			//Doi tuong luu tru du lieu cua node
		Node<Element> *next;	//Con tro luu dia chi cua node tiep theo
	public:
		Node<Element>(Element x,Node<Element> *N=NULL){//Ham tao co doi mac dinh
			elem = x;
			next = N;
		}
		Element getElem(){ return elem;}				//Tra ve doi tuong luu tru du lieu cua Node
		void setElem(Element x){ elem = x;}			// Dat thay the doi tuong luu trong Node bang doi tuong moi
		Node<Element> *getNext(){return next;}		// Tra ve con tro luu dia chi cua Node tiep theo
		void setNext(Node<Element> *N){ next = N;}	// Gan gia tri con tro next bang gia tri N
};
#endif
//int main() {
//	Node<int> N(2);
//	Node<int>* A = new Node<int>(7, &N);
//	Node<int>* B = new Node<int>(6);
//	N.setNext(B);
//	Node<int> C(10);
//	B->setNext(&C);
//	for (Node<int>* p = A; p != 0; p = p->getNext()) cout << p->getElem() << " ";//Duyet
//}
