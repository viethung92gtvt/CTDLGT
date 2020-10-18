#include <bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
	if(n==0) return;
	nhap(a,n-1);
	cout<<"a["<<n<<"]= ";cin>>a[n];
}
void xuat(int *a,int n){
	if(n==0) return;
	xuat(a,n-1);
	cout<<a[n]<<"\t";
}
int tong(int *a,int n){
	return n==0?0:a[n]+tong(a,n-1);
}
void sx(int *a,int n){
	if(n<=1) return;
	sx(a,n-1);//Sx tu a[1] den a[n-1]
	for(int i=n-1;i>=1 && a[i]>a[i+1];i--) swap(a[i],a[i+1]);
}
int TimMax(int *a,int n){
	return n==0?INT_MIN:max(TimMax(a,n-1),a[n]);
}
int LONNHAT(int *a,int L,int R){
	if(L==R) return a[L];
	int M=(L+R)/2;
	return max(LONNHAT(a,L,M),LONNHAT(a,M+1,R));
}
bool ktraTangDan(int *a,int n){
	return n<=1?true:(a[n]>a[n-1]&&ktraTangDan(a,n-1));
}
int main ()
{
  int a[100],n;
  cout<<"Nhap n: ";cin>>n;
  nhap(a,n);
  cout<<"\nDay sau khi nhap: \n"; 
  xuat(a,n);
  bool tang = ktraTangDan(a,n);
	if(tang) cout<<"\nDay tang dan"; else cout<<"\nDay khong tang dan";
  sx(a,n);
  cout<<"\nDay sau khi sap xep: \n";
  xuat(a,n);
  cout<<"\nGia tri lon nhat: \n"<<TimMax(a,n);
  cout<<"\nGia tri lon nhat: \n"<<LONNHAT(a,1,n);

  return 0;
}

