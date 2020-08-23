#include <bits/stdc++.h>
using namespace std;
template <class T>
T Power(T x,int n){
	if(n==0) return 1;
	return x*Power(x,n-1);
	
}
int main(){
	cout<<"2^5!="<<Power(2,5);
}


