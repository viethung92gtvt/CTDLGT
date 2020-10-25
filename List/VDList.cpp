#include <bits/stdc++.h>
#include<list>
using namespace std;
int main ()
{
	list <int> V(5,3);
	for(auto v:V) cout<<v<<" ";
	V.push_back(8);
	V.push_back(2);
	V.push_back(6);
	V.push_front(6);
	//cout<<V[2];//Khong cho phep
	cout<<"\nXuoi: ";
	for(list<int>::iterator it=V.begin();it!=V.end();it++){
		cout<<*it<<" ";
	}
	V.pop_back();
	V.pop_front();
	cout<<"\nNguoc: ";
	for(list<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++){
		cout<<*it<<" ";
	}
	  return 0;
}

