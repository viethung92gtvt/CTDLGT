#include <bits/stdc++.h>
#include "dlist.cpp"
//#include "dlist_iterator.cpp"
using namespace std;
int main ()
{
  dlist<int> mylist;
 // dlist<int>::iterator it1,it2;
  // set some values:
  for (int i=1; i<10; ++i) mylist.push_back(i*10);
 cout << "mylist contains:";
  for (node<int> *it = mylist.gethead(); it!=NULL; it=it->getnext())
    cout <<" "<<it->getelem();
  cout << '\n';

  return 0;
}
