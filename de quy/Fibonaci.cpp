#include <bits/stdc++.h>
using namespace std;

long BinaryFib(int k){
	if(k<=1) return 1;
	return BinaryFib(k-1)+BinaryFib(k-2);
}

int main(){
	cout<<"So fibonaci thu 5 la "<<BinaryFib(5);
}

