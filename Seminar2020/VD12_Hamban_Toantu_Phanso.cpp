#include <bits/stdc++.h>
using namespace std;
struct ps{
	int t,m;
	ps(int t=0,int m=1){
		this->t = t;
		this->m = m;
		if(m<0){
			t*=-1;
			m*=-1;
		}
		int d=__gcd(t,m); 
		t/=d;m/=d;
	}
	friend ostream &operator<<(ostream &os,ps p){
		os<<p.t<<"/"<<p.m;
		return os;
	}
	ps operator+(ps p){
		return ps(t*p.m +m*p.t,m*p.m);
	}
	
};
int main ()
{
  ps P(2,3),Q(1,3),R = P+Q;
  cout<<R;
  return 0;
}

