#include <bits/stdc++.h>
using namespace std;
class Diem
{
	double x,y;
	public: 
		friend double kc(Diem A,Diem B){
			double u = A.x - B.x, v= A.y - B.y;
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
class TuGiac{
Diem A,B,C,D;
	public:
		friend istream &operator>>(istream &is,TuGiac &T){
			is>>T.A>>T.B>>T.C>>T.D;
			return is;
		}
		friend ostream &operator<<(ostream &os,TuGiac T){
			os<<T.A<<" "<<T.B<<" "<<T.C<<" "<<T.D;
			return os;
		}
		double dientich(){
			return fabs(dt(A,B)+dt(B,C)+dt(C,D)+dt(D,A))/2;
		}
};
int main ()
{
  cout<<fixed<<setprecision(3);
  TuGiac T;
  cin>>T;
  cout<<T.dientich();
  return 0;
}

