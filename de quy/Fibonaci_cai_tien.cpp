#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> BinaryFib(int k){
	if(k<=2) return {1,1};
	else{
		pair<long long,long long> t=BinaryFib(k-1);
		return {t.first+t.second,t.first};
	}
}

int main(){
	cout<<"So fibonaci thu 5 la "<<BinaryFib(1000000000).first;
}


