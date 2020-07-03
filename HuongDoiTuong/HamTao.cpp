//Ham Tao
#include <bits/stdc++.h>
using namespace std;
class ps{
	int t,m;
	public: 
		ps(int t=0,int m=1){
			this->t = t;
			this->m = m;
		}
		void rutgon(){
			int d=__gcd(t,m);
			t/=d;m/=d;
			if(m<0) {
				t = -t;m=-m;
			}
		}
		friend ostream& operator<<(ostream &os,ps p){
			p.rutgon();
			if(p.m!=1)
			os<<p.t<<"/"<<p.m;
			else os<<p.t;
			return os;
		}
};
int main ()
{
  ps p(12,-4), *q = new ps(-20,12);
  cout<<p<<endl;
  cout<<*q;
  ps z(5);
  cout<<"\n z = "<<z;
  ps t;
  cout<<"\n t = "<<z;
  t=6;
  cout<<"\n t = "<<t;
  return 0;
}

