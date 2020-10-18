#include <bits/stdc++.h>
using namespace std;
template <typename T>
void Swap(T &a,T &b){
	int c=a;
	a=b;
	b=c;
}
int main ()
{
  int a=4,b=5; Swap(a,b);
  cout<<"\na = "<<a;
  cout<<"\nb = "<<b;
	float c=5,d=6; Swap(c,d);
  cout<<"\nc = "<<c;
  cout<<"\nd = "<<d;
  return 0;
}

