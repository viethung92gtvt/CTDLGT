#include"Node.cpp"
#include"slist.cpp"
#ifndef slist_iterator_cpp
#define slist_iterator_cpp
using namespace std;
template<class Element>
class SList_Iterator{
	SList<Element> *List;
	Node<Element> *Curr;
	public:
		SList_Iterator(SList<Element>* L) { List = L; Curr = List->front(); }
		Node<Element> *&getCurr(){return Curr;}
		void Reset() {
			Curr = List->front();
		}
		Element operator*(){
			 return Curr->getElem();
		}
		void setElement(Element e) {
			Curr->setElem(e);
		}
		Element getElement() {
			return Curr->getElem();
		}
		bool operator!=(SList_Iterator<Element> it1){
			return Curr!=it1.getCurr();
		}
		bool hasNext() {
			return Curr != NULL;
		}
		void Next() {
			Curr = Curr->getNext();
		}
};
#endif

