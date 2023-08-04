#include "slist.cpp"
#include "node.cpp"
#include "slist_iterator.cpp"
int main()
{
	SList<int> L;
	for (int i = 1; i <= 10; i++) L.push_back(i);
//	Node<int> *p;
//	p=L.front();
//	do{
//		
//	cout<<p->getElem();
//		p=p->getNext();
//	}while(p!=NULL);

	SList_Iterator<int> it(&L);
	int sum=0;
	while (it.hasNext()) {
		cout << *it<<" ";
		sum+=*it;
		it.Next();
	}
	cout<<"\n Tong = "<<sum;
	return 0;
}
