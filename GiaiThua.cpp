#include <bits/stdc++.h>
using namespace std;
long long recursiveFactorial(int n){ 
    if  (n==0)  return 1;		// Truong hop co so
    return  n*recursiveFactorial(n- 1);	
}
//cach2
long long gt(int n){
	return n?gt(n-1)*n:1;
}
int main(){
	cout<<"5! = "<<recursiveFactorial(5);
	cout<<"\n5! = "<<gt(5);
}


