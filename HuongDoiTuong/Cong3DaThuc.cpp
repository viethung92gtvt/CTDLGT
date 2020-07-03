//Cong 3 da thuc
#include <bits/stdc++.h>
using namespace std;
class Dathuc{
	double a[10005]={};
	int n;
	friend istream &operator>>(istream &is,Dathuc &D){
		is>>D.n;
		for(int i=0;i<=D.n;i++) is>>D.a[i];
		return is;
	}
	friend ostream &operator<<(ostream &os,Dathuc D){
		for(int i=0;i<=D.n;i++) os<<D.a[i]<<" ";
		return os;
	}
	friend Dathuc tong(Dathuc A,Dathuc B){
		Dathuc C;
		int i;
		int p = max({A.n,B.n});
		for(i=0;i<=A.n;i++){
			C.a[i]+=A.a[i];
		}
		for(i=0;i<=B.n;i++){
			C.a[i]+=B.a[i];
		}
		while(p>0&&C.a[p]==0) p--;
		C.n = p;
		return C;
	}
};
int main ()
{
cout<<fixed<<setprecision(2);
  Dathuc A,B,C;
  cin>>A>>B>>C;
  cout<<tong(tong(A,B),C);
  return 0;
}

