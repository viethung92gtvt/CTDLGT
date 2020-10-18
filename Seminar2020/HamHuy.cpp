#include <bits/stdc++.h>
using namespace std;
struct dathuc{
	int n;
	float *a;//cac he so
	dathuc(){n=0;a = nullptr;}//NULL ~0 ~ nullptr
	~dathuc(){if(a) delete[]a;}
	void nhap(){
		cout<<"\nBac da thuc: ";cin>>n;
		a = new float[n+1];
		for(int i=0;i<=n;i++){
			cout<<"a["<<i<<"] = ";cin>>a[i];
		}
	}
	void xuat(){for(int i=0;i<=n;i++) cout<<a[i]<<"\t";	}
};
int main ()
{
  dathuc P;//Goi den ham tao, khi ra khoi main thi tu dong goi ham huy
  dathuc *Q = new dathuc();//goi den ham tao
  P.nhap();
  P.xuat();
  Q->nhap();
  Q->xuat();
  delete Q;
  return 0;
}

