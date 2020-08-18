#include <bits/stdc++.h>
using namespace std;
class Diem
{
	double x,y;
	public: 
		double kc(Diem M){
			double u = x - M.x, v= y - M.y;
			return sqrt(u*u+v*v);
		}
		friend istream &operator>>(istream &is, Diem &A){
			is>>A.x>>A.y;
			return is;
		}
		friend ostream &operator<<(ostream &os,Diem A){
			os<<"("<<A.x<<","<<A.y<<")";
			return os;
		}
		friend double dt(Diem A,Diem B){
			return A.x*B.y- A.y*B.x;
		}
};
class TG{
Diem A,B,C;
	public:
		friend istream &operator>>(istream &is,TG &T){
			is>>T.A>>T.B>>T.C;
			return is;
		}
		friend ostream &operator<<(ostream &os,TG T){
			os<<T.A<<" "<<T.B<<" "<<T.C;
			return os;
		}
	
		double chuvi(){
			return A.kc(B)+B.kc(C)+C.kc(A);
		}
		double dientich(){
			return fabs(dt(A,B)+dt(B,C)+dt(C,A))/2;
		}
};
int main ()
{
	
  TG T;
  ifstream fin("diemIN.txt");
  fin>>T;
  cout<<T;
 freopen("diemOUT.txt","w",stdout);
  cout<<"Chu vi "<<T.chuvi();
  cout<<"Dien tich "<<T.dientich();
  //cin>>M>>N;//phai co return is de co the cin lien tuc tren 1 cau lenh
  return 0;
}

