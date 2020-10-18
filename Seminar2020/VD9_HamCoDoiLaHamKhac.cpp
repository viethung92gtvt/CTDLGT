#include <bits/stdc++.h>
using namespace std;
typedef double Ham(double x);

double tong(int n,Ham f){//double tong(int n,double f(double)){
	double s=0;
	for(int i=1;i<=n;i++) s+=f(i);
	return s;
}
double bp(double x) {return x*x;
}
int main ()
{
	int n;cin>>n;
	cout<<"s1 = "<<tong(n,bp);
	cout<<"\ns2 = "<<tong(n,sin);
	cout<<"\ns3 = "<<tong(n,sqrt);
  
  return 0;
}

