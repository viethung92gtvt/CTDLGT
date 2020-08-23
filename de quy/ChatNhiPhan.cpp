//Chat nhi phan. Cho 2 diem A, B va diem C. Tim M tren AB gan C nhat
#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
double kc(Diem A,Diem B){
	double u = A.first - B.first, v=A.second - B.second;
	return u*u + v*v;
}
double dt(Diem u, Diem v){//Tinh dinh thuc
	return u.first*v.second - u.second*v.first;
}
double DienTichTamGiac(Diem A,Diem B,Diem C){
		double s=0;
		s+=dt(A,B);
		s+=dt(B,C);
		s+=dt(C,A);
		return fabs(s);
	}	
Diem chat(Diem A,Diem B,Diem C){
	if(fabs(A.first - B.first)<1e-10 &&fabs(A.second - B.second)<1e-5) return A;
	Diem D={(A.first+B.first)/2,(A.second + B.second)/2};
	if(kc(A,C)>kc(B,C)) return chat(D,B,C);
	return chat(A,D,C);
}
int main ()
{
	int n; cin>>n;
	double x,y;
	Diem A[11],B[11],C[11],M[11],KQ[11];
	for(int i =1;i<=n;i++){
		cin>>x>>y;A[i]={x,y};
		cin>>x>>y;B[i]={x,y};
		cin>>x>>y;C[i]={x,y};
		cin>>x>>y;M[i]={x,y};
		double a = DienTichTamGiac(A[i],B[i],M[i]);
		double b = DienTichTamGiac(B[i],C[i],M[i]);
		double c = DienTichTamGiac(A[i],C[i],M[i]);
		double abc = DienTichTamGiac(A[i],B[i],C[i]);
		if(a+b+c==abc) {//Kiem tra xem M co nam trong tam giac khong
			KQ[i] = M[i];
			continue;
		}
  		Diem T=chat(A[i],B[i],M[i]);
  		Diem V=chat(B[i],C[i],M[i]);
  		Diem U=chat(A[i],C[i],M[i]);
  		if(kc(T,M[i])<kc(V,M[i])) KQ[i] = T;else KQ[i]=V;
  		if(kc(KQ[i],M[i])>kc(U,M[i])) KQ[i] = U;
  }
  for(int i =1;i<=n;i++) printf("%.3f %.3f\n",KQ[i].first,KQ[i].second);
  return 0;
}

