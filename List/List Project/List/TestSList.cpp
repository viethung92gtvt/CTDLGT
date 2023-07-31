//#include "slist.cpp"
//#include "slist_iterator.cpp"
//int main()
//{
//	SList<int> L;
//	for (int i = 1; i <= 10; i++) L.push_back(i);
//	SList_Iterator<int> it(&L);
//
//	while (it.hasNext()) {
//		if (it.getElement() == 2) {
//			L.erase(it.getCurr());
//			break;
//		}
//		it.Next();
//	}
//	it.Reset();
//	while (it.hasNext()) {
//		cout << it.getElement();
//		it.Next();
//	}
//	return 0;
//}