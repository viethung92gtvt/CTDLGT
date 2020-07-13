#include <bits/stdc++.h>
using namespace std;
struct ps{
	int ts,ms;
	ps(int ts=0,int ms=1){
		this->ts = ts;
		this->ms = ms;
	}
	void rutgon(){
		int ucln=__gcd(ts,ms);
		ts/=ucln;ms/=ucln;
	}
	ps operator+(ps b){
		ps c;
		c.ts = ts*b.ms + ms*b.ts;
		c.ms = ms*b.ms;
		c.rutgon();	
		return c;
	}
	ps operator/(ps b){
		ps c;
		c.ts = ts*b.ms;
		c.ms = ms*b.ts;
		c.rutgon();	
		return c;
	}
	friend ostream &operator<<(ostream &os,ps a){
		os<<a.ts<<"/"<<a.ms;
		return os;
	}
};
int main ()
{
  int n,i;
  cin>>n;
  int a[n];
  for(i=1;i<=n;i++){
  	cin>>a[i];
  }
  ps tong=ps(a[n],1);
  for(i=n-1;i>=1;i--){
  		tong= ps(1,1)/tong+ps(a[i],1);
  }
  cout<<tong;
  return 0;
}

