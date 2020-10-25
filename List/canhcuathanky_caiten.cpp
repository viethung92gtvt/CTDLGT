#include <bits/stdc++.h>
#include"caidatlist\slist.cpp"
using namespace std;
int main ()
{
	string sv[]={"Hanh Phuc","Am No","Yeu Thuong","Doc Lap","Tu DO"};
	slist<pair<string,int>> L;
	for(auto z:sv) L.push_back({z,1});
	int n;
	cin>>n;
	while(n>L.front().second){
		n-=L.front().second;
		L.front().second*=2;
		L.push_back(L.front());
		L.pop_front();
	}
	cout<<L.front().first;
  return 0;
}

