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
class DaGiac{
Diem A[1005];
int n;
	public:
		friend istream &operator>>(istream &is,DaGiac &D){
			is>>D.n;
			for(int i=0;i<D.n;i++) is>>D.A[i];
			return is;
		}
		double dientich(){
			double dtTong=0;
			int i;
			for(i=0;i<n-1;i++){
				dtTong+=dt(A[i],A[i+1]);
			}
			dtTong+=dt(A[i],A[0]);
			return fabs(dtTong)/2;
		}
		double chuvi(){
			double cv=0;
			int i;
				for(i=0;i<n-1;i++){
					cv+=kc(A[i],A[i+1]);
				}
				cv += kc(A[i],A[0]);
			return cv;
		}
};
int main ()
{
  cout<<fixed<<setprecision(3);
  DaGiac D;
  cin>>D;
  cout<<D.chuvi()<<endl;
  cout<<D.dientich();
  return 0;
}

