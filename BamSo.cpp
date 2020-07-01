#include <bits/stdc++.h>
using namespace std;
int main(){
	string xau;
	cin>>xau;
	int tong=0;
	for(auto x:xau) tong+=x-48;
	tong=tong%9?tong%9:9;
	cout<<tong;
	
}


