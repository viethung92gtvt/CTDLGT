//Huong Doi tuong
#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define in(A) cout<<"Nhap toa do "<<#A<<" : "; cin>>A.x>>A.y;
typedef pair<double,double> Diem;

double kc(Diem A,Diem B){
	A.x -=B.x;
	A.y -=B.y;
	return sqrt(A.x*A.x+A.y*A.y);
}
double dt(Diem A,Diem B){
	return A.x*B.y - A.y*B.x;
}
struct Tamgiac{
	Diem A,B,C;
	void nhap(){
		in(A);
		in(B);
		in(C);
	}
	double chuvi();
	double dientich();
};
double Tamgiac::chuvi(){
	return kc(A,B)+kc(B,C)+kc(C,A);	
}
double Tamgiac::dientich(){
	return fabs(dt(A,B)+dt(B,C)+dt(C,A))/2;
}
int main ()
{
  Tamgiac T;
  T.nhap();
  cout<<"\nChu vi tam giac: "<<T.chuvi();
  cout<<"\nDien tich tam giac: "<<T.dientich();
	  return 0;
}

