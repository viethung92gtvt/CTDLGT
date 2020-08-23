//Tinh sin va cos

#include <bits/stdc++.h>
using namespace std;
double Sin(double);
double Cos(double);

double Sin(double x){
	if(fabs(x)<1e-5) return x;
	return 2*Sin(x/2)*Cos(x/2);	
}
double Cos(double x){
	if(fabs(x)<1e-5) return 1;
	double u = Cos(x/2);
	double v = Sin(x/2);
	return u*u - v*v;
}
int main ()
{
  for(double u=-1;u<=1;u+=0.1) cout<<u<<Sin(u)<<" "<<sin(u)<<endl;
  for(double u=-1;u<=1;u+=0.1) cout<<u<<Cos(u)<<" "<<cos(u)<<endl;
  return 0;
}

