#include <bits/stdc++.h>
using namespace std;
template <class T>
T Power(T x, int n){
	if(n==0) return 1;
	if(n%2!=0){
		T y = Power(x,(n-1)/2);
		return x*y*y;
	}
	else{
		T y = Power(x,n/2);
		return y*y;
	}
}
int main(){
	cout<<"2^5!="<<Power(2,5);
}
