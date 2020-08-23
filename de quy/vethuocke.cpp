#include <bits/stdc++.h>
using namespace std;
void vethuocke(int n){
	if(n==0) cout<<"---0";
	else{
		vethuocke(n-1);
		cout<<"\n-";
		cout<<"\n--";
		cout<<"\n-";
		cout<<"\n---"<<n;
		
		
	}
}
int main(){
vethuocke(6);
}


