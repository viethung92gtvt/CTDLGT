//Chat nhi phan. Cho 2 diem A, B va diem C. Tim M tren AB gan C nhat
#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
double kc(Diem A,Diem B){
	double u = A.first - B.first, v=A.second - B.second;
	return u*u + v*v;
}
Diem chat(Diem A,Diem B,Diem C){
	if(fabs(A.first - B.first)<1e-5 &&fabs(A.second - B.second)<1e-5) return A;
	Diem D={(A.first+B.first)/2,(A.second + B.second)/2};
	if(kc(A,C)>kc(B,C)) return chat(D,B,C);
	return chat(A,D,C);
}
int main ()
{
  Diem A={0,0}, B={5,0}, C={10,2};
  Diem M=chat(A,B,C);
  cout<<"("<<M.first<<","<<M.second<<")";
  return 0;
}

