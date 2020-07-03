//Kieu du lieu pair
#include <bits/stdc++.h>
using namespace std;
double kc(pair<double,double> u, pair<double,double> v){
	double t = u.first - v.first, z = u.second - v.second;
	return sqrt(t*t+z*z);
}
double dt(pair<double,double> u, pair<double,double> v){//Tinh dinh thuc
	return u.first*v.second - u.second*v.first;
}
typedef double ham(pair<double,double> u,pair<double,double> v);
class Dagiac{
	int n;
	vector<pair<double,double>> A;
	friend istream &operator>>(istream &is, Dagiac &D){
		is>>D.n;
		D.A.resize(D.n);
		for(auto &z:D.A) is>>z.first>>z.second;
		return is;
	}
	double tinh(ham f){
		double s=0;
		A.push_back(A[0]);//Them 1 phan tu A[0] vao cuoi vector
		int i;
		for(i=0;i<n;i++){
			s+=f(A[i],A[i+1]);
		}
		A.pop_back();
		return fabs(s);
	}	
};
int main ()
{
	Dagiac D;
	cout<<fixed<<setprecision(3);
	cin>>D;
	cout<<D.tinh(kc)<<"\n"<<D.tinh(dt)/2;
  return 0;
}

