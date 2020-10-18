#include <bits/stdc++.h>
using namespace std;
template <class T>
void Nhap(T *&a, int &n,char ten){
	cout<<"Nhap so phan tu day "<<ten<<" : ";cin>>n;
	a = new T[n];
	for(int i=0;i<n;i++){
		cout<<ten<<"["<<i<<"] = ";
		cin>>a[i];
	}
}
template <class T>
void Xuat(T *a, int n,char *tb=" "){
	cout<<tb<<"\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
struct ps{
	int t,m;
};

istream &operator>>(istream &is,ps &p){
	is>>p.t>>p.m;return is;
}
ostream &operator<<(ostream &os, ps p){
	os<<p.t<<"/"<<p.m;
}
int main ()
{
  ps *p;
  int n;
	Nhap(p,n,'P');
	Xuat(p,n,"Danh sach ps la: ");
  return 0;
  
}

