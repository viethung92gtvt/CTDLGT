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
int main ()
{
  int *a,m;
  Nhap(a,m,'A');
  Xuat(a,m,"Cac phan tu cua A la: ");
  float *b;
  Nhap(b,m,'B');
  Xuat(b,m,"Cac phan tu cua B la: ");
  string *c;int k;
  Nhap(c,k,'C');
  Xuat(c,k,"Cac phan tu cua C la: ");
  return 0;
}

