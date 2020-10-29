#include <bits/stdc++.h>
using namespace std;
int main ()
{
	string sv[]={"Hanh Phuc","Am No","Yeu Thuong","Doc Lap","Tu DO"};
	list<string> L;
	for(auto z:sv) L.push_back(z);
	int n;
	cin>>n;
	while(n>1){
		L.push_back(L.front());
		L.push_back(L.front());
		L.pop_front();
		n--;
	}
	cout<<L.front();
  return 0;
}

