#include <bits/stdc++.h>
using namespace std;
int sum(int *a,int n){
	return n==0?0:sum(a,n-1)+a[n];
}
void nhap(int *a,int n){
	if(n==0) return;
	nhap(a,n-1);
	cout<<"a["<<n<<"]=";cin>>a[n];
}
void xuat(int *a,int n){
	if(n) {
		xuat(a,n-1);
		cout<<a[n]<<" ";
	}
}
void sx(int *a,int n){
	if(n<=1) return ;
	sx(a,n-1);
	for(int i=n;i>1 && a[i]<a[i-1];i--) swap(a[i],a[i-1]);
}
int main ()
{
  int n,a[100];
  cout<<" n = :";cin>>n;
  nhap(a,n);
  cout<<"Day vua nhap: "; xuat(a,n);
  sx(a,n);
  cout<<"Day vua sau khi sx: \n"; xuat(a,n);
  return 0;
}

