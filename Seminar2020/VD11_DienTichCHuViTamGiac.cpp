//Huong chuc nang
#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
#define x first
#define y second
#define in(A) cout<<"Nhap toa do "<<#A<<" : "; cin>>A.x>>A.y;
double kc(Diem A,Diem B){
	A.x -=B.x;
	A.y -=B.y;
	return sqrt(A.x*A.x+A.y*A.y);
}
double dt(Diem A,Diem B){
	return A.x*B.y - A.y*B.x;
}
double chuvi(Diem A,Diem B,Diem C){
	return kc(A,B)+kc(B,C)+kc(C,A);	
}
double dientich(Diem A,Diem B,Diem C){
	return fabs(dt(A,B)+dt(B,C)+dt(C,A))/2;
}

int main ()
{
	Diem A,B,C;
	in(A);in(B);in(C);  
	cout<<"\nChu vi tam giac: "<<chuvi(A,B,C);
	cout<<"\nDien tich tam giac: "<<dientich(A,B,C);
	  return 0;
}

