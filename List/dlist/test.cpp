#include <bits/stdc++.h>
#include"dlist.cpp"
using namespace std;
int main ()
{
	dlist <int> V(1,3);
	for(auto v:V) cout<<v<<" ";
	V.push_back(8);
	V.push_back(2);
	V.push_back(6);
	V.push_front(6);
	dlist<int>::iterator it = V.begin();
	it++; 
	//cout<<*it<<"sdsd";
	V.insert(it,100);
	//cout<<V[2];//Khong cho phep
	cout<<"\nXuoi: ";
	for(dlist<int>::iterator it=V.begin();it!=V.end();it++){
		cout<<*it<<" ";
	}
//	V.pop_back();
//	V.pop_front();
	cout<<"\nNguoc: ";
	for(dlist<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++){
		cout<<*it<<" ";
	}
	  return 0;
}

