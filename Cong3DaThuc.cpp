//Cong 3 da thuc
#include <bits/stdc++.h>
using namespace std;
void nhap(int &n, double *&a){
	cin>>n;
	a = new double[100005];
	for(int i=0;i<=n;i++) cin>>a[i];
}
void cong(int n, double *a,int m,double *b, int k, double *c){
	double d[100005]={};
	int i;
	int p = max({m,n,k});
	for(i=0;i<=n;i++){
		d[i]+=a[i];
	}
	for(i=0;i<=n;i++){
		d[i]+=b[i];
	}
	for(i=0;i<=k;i++){
		d[i]+=c[i];
	}
	while(p>0&&d[p]==0) p--;
	for(i=0;i<=p;i++) cout<<fixed<<setprecision(2)<<d[i]<<" ";
}
int main ()
{
  int n,m,k;
  double *a,*b,*c;
  nhap(n,a);
  nhap(m,b);
  nhap(k,c);
  cong(n,a,m,b,k,c);
  delete []a;
  delete []b;
  delete []c;
  return 0;
}

