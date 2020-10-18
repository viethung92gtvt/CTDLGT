#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b;
	B1:
  		cout<<"a = ";cin>>a;
  		cout<<"b = ";cin>>b;
	B2:
		if(a!=b){
			a>b?a-=b:b-=a;
			goto B2;
		}
		else goto B3;
	B3: cout<<"UCLN "<<a;
  return 0;
}

