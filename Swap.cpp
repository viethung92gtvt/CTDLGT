#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
//Cach 1:	int t=a;a=b;b=t;
//Cach 2: Khong dung bien trung gian
	a=a+b;//hoac a=a^b (phep xor bit) de tranh bi tran so
	b=a-b;//hoac b=a^b
	a=a-b;//hoac a=a^b	
}
int main ()
{
  int a=5,b=10;
  cout<<"a = "<<a<<" b = "<<b;
  swap(a,b);
  cout<<"\na = "<<a<<" b = "<<b;
  return 0;
}

