#include"Node.cpp"
//#include"slist_iterator.cpp"
#ifndef slist_cpp
#define slist_cpp
using namespace std;
template<class Element>
class SList{
private:
	Node<Element> *header,*trailer;
	int num;
public:
		SList(){					//Khoi tao list rong
			header=trailer=NULL;
			num=0;
		}
		SList(int k, Element e){			//Khoi tao list co k phan tu, moi phan tu bang x
			num=0;
			while(k--){
				push_back(e);
			}
		}
		int size(){return num;}						//Tra ve so phan tu hien tai cua list
		bool isEmpty(){return num==0;}				//Tra ve true neu list rong, flase neu list khac rong
		
		Node<Element>* front() {return header; }	//Tra ve dia chi nut dau cua list
		Node<Element>* back() { return trailer; }	//Tra ve dia chi nut duoi cua list
		
		Node<Element>* push_back(Element e);		//Them 1 phan tu vao duoi list
		Node<Element>* push_front(Element e);		//Them 1 phan tu vao dau list
		void pop_front();							//Xoa bo phan tu dau list
		void pop_back();							//Xoa bo phan tu cuoi list
		Node<Element>* getNode(int i);				//Tra ve node o vi tri i
		void erase(Node<Element>* p);
		void replace(Node<Element>* p, Element e);				// Thay the phan tu luu trong node do co dia chi luu trong p bang phan tu co gia tri e
		Node<Element>* insertAfter(Node<Element>* p, Element e);// Chen them node sau node do p tro toi

};
//----------------------------------------------
template<class Element>
Node<Element>* SList<Element>:: push_back(Element e) {
	if (num == 0) {	//TH1: Neu danh sach rong
		header = trailer = new Node<Element>(e);
	}
	else {			//TH2: Neu danh sach da co phan tu
		trailer->setNext(new Node<Element>(e));
		trailer = trailer->getNext();
	}
	num++;
	return trailer;
}
//-----------------------------------------
template<class Element>
Node<Element>*  SList<Element>::push_front(Element e){
	if (num == 0) 	//TH1: Neu danh sach rong
		header = trailer = new Node<Element>(e);
	else {			//TH2: Neu danh sach da co phan tu
		header = new Node<Element>(e, header);
	}
	num++;
	return header;
}
//--------------------------------------------
template<class Element>
void SList<Element>::pop_front(){
	if (num == 0) return;
	if (num == 1) {
		header = trailer = 0;
	}
	else {
		header = header->getNext();
	}
	num--;
}
//--------------------------------------------
template<class Element>
void SList<Element>::pop_back(){
	if (num == 0) return;
	if (num == 1) {
		header = trailer = 0;
	}
	else {
		Node<Element>* p = header;
		while (p->getNext() != trailer) p = p->getNext();
		p->setNext(0);
		trailer = p;
	}
	num--;
}
//-----------------------------------------------------------------------
template<class Element>
Node<Element>* SList<Element>::getNode(int i)
{
	if (i < 0 || isEmpty())
		return NULL;
	Node<Element>* p;
	int dem = 0;
	p = header;
	while (dem < i && p != NULL) {
		dem++;
		p = p->getNext();
	}
	return p;
}
//--------------------------------------------
template <class Element>
void  SList<Element>::erase(Node<Element>* p) {
	if (p == header) return pop_front();	//Neu node can xoa dang o dau thi goi pop_front()
	if (p == trailer) return pop_back();	//Neu node can xoa dang o cuoi thi goi pop_back()
	Node<Element>* q = header;				//Tao 1 con tro chay tu head
	while (q->getNext() != p) q = q->getNext();//Chay den khi nao dung truoc vi tri p thi dung
	q->setNext(p->getNext());				//cho next cua q tro den next cua p
	delete[]p;
	num--;
}
//--------------------------------------------
template <class Element>
void SList<Element>::replace(Node<Element>* p, Element e) {
	p->setElem(e);
}
//-------------------------------------------------------------------------------------------------------------------------------
template <class Element>
Node<Element>* SList<Element>::insertAfter(Node<Element>* p, Element e) {
	Node<Element>* q;
	q = new Node<Element>;
	q->setElem(e);

	q->setNext(p->getNext());
	p->setNext(q);

	if (p == trailer)
		trailer = q;
	num++;
	return q;
}
#endif