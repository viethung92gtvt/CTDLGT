#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  int d;//dem so so 0 tan cung cua n!
  list<int> L(1,1);
  cin>>n;
  for(int i=2;i<=n;i++){
  	unsigned long long nho=0;
  	for(auto z=L.rbegin();z!=L.rend();z++){
  		nho=nho+*z*i;
  		*z = nho%10;
  		nho/=10;
	  }
	  while(nho){
	  	L.push_front(nho%10);nho/=10;
	  }
	  while(L.back()==0){
	  	d++;
	  	L.pop_back();
	  }
  }
  for(auto z:L) cout<<z;
  cout<<string(d,'0');//Tao ra 1 xau co d ky tu 0
  return 0;
}

