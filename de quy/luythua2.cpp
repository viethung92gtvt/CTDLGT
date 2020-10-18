#include <bits/stdc++.h>
using namespace std;

float luythua(float x,int n){
	if(n==0) return 1;
	if(n%2){
		float y = luythua(x,(n-1)/2);
		return x*y*y;
	}
	else{
		float y = luythua(x,n/2);
		return y*y;
	}
}

int main ()
{
	float x;
	int n;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap n: "; cin>>n;
  	cout<<"Luy thua tu code: "<<luythua(x,n);
  	cout<<"\nLuy thua trong thu vien: "<<pow(x,n);
  return 0;
}

